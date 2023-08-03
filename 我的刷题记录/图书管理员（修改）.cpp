#include<bits/stdc++.h>
using namespace std;
int book[1005],user_lenth[1005],user_code[1005],n,q,t,ans;
int main(){
	freopen("lib.in","r",stdin);
	freopen("lib.out","w",stdout);
	scanf("%d%d",&n,&q);
	for(int i=0;i<n;i++) scanf("%d",&book[i]);
	sort(book,book+n);
	for(int i=0;i<q;i++){
		scanf("%d%d",&user_lenth[i],&user_code[i]);
		t=pow(10,user_lenth[i]);
		for(int j=0;j<n;j++)
			if(book[j]%t==user_code[i]){
				ans=book[j];
				break;
			}else ans=-1;
		printf("%d\n",ans);
	}
	return 0;
} 
