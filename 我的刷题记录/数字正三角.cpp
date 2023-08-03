#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	scanf("%d",&n);
	int cnt=1;
	int i;
	for(i=1;i<=n;i+=1){
		for(int k=n-i;k>0;k--){
			printf(" ");
		}
		for(int j=1;j<=i*2-1;j++){
			printf("%d",cnt);
		}
		cnt++;
		printf("\n");
	}
	return 0;
}
