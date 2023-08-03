#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,n1=0,a1=0,b1=0;
	scanf("%d%d%d",&n,&a,&b);
	for(int i=1;i<=n;i++){
		a1++;
		b1++;
		if(a1==b1){
			n1++;
		}
		if(b1==b){
			b1=0;
		}
		if(a1==a){
			a1=0;
		}
	}
	printf("%d",n1);
	return 0;
}
