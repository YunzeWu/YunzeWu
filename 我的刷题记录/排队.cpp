#include<bits/stdc++.h>
using namespace std;
int a[50];
int main(){
	int n,m;
	int w=0,x=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		if(a[i]==m){
			w=i;
		}
	}
	for(int i=n;i>=1;i--){
		if(a[i]==m){
			x=i;
		}
	}
	printf("%d %d",x,w);
	return 0;
}
