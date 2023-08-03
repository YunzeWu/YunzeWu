#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j){
				a[i] 
			}else if(i+j==n+1){
				a[i][j]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1){
				printf("X");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

