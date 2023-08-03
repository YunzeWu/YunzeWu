#include<bits/stdc++.h>
using namespace std;
int book[1005]/*for n*/,user_lenth[1005]/*for q 1*/,user_code[1005]/*for q 2*/;
int main(){
	freopen("lib.in","r",stdin);
	freopen("lib.out","w",stdout);
	int n,q;
	scanf("%d%d",&n,&q);
	for(int i=0;i<n;i++){
		scanf("%d",&book[i]);
	}
	int t=1;
	for(int i=0;i<q;i++){
		scanf("%d%d",&user_lenth[i],&user_code[i]);
		t=1;
		for(int j=0;j<user_lenth[i];j++){
			t*=10;
		}
		int ans=10000001;
		for(int j=0;j<n;j++){
			if(book[j]==user_code[i]){
				ans=book[j];
				break;
			}
			if(book[j]%t==user_code[i]){
				if(ans>book[j]){
					ans=book[j];
				}
			}
		}
		if(ans==10000001){
			ans=-1;
		}
		printf("%d\n",ans);
	}
	return 0;
} 
