#include<bits/stdc++.h>
using namespace std;
int a[25][25];

int main(){
	int n;
	scanf("%d",&n); 
	for(int i=0,j=0;i<n;i++,j++){
		a[i][0]=1;
		a[i][j]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i+1][j]=a[i][j-1]+a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int k=n-(i+1);k>0;k--){
			printf(" ");
		}
		for(int j=0;j<n;j++){
			if(a[i][j]!=0){
				if(j==i){
					printf("%d",a[i][j]);
				}else{
					printf("%d ",a[i][j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}

