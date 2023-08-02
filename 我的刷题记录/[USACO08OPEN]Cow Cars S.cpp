#include<bits/stdc++.h>
using namespace std;
int a[50010];
int n,s=0,m,d,l,ans;

int main(){
	scanf("%d%d%d%d",&n,&m,&d,&l);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	sort(a+1,a+1+n);
	for(int i=1;i<=m;i++){
		ans=0;
		for(int j=1;j<=n;j++){
			if(!a[j]) continue;
			if(a[j]-ans*d>=l){
				ans++;
				s++;
				a[j]=0;
			}
		}
	}
	printf("%d\n",s);
	return 0;
}
