#include<bits/stdc++.h>
using namespace std;
int a[105][105],b[105][105];

int main(){
	int n,m;
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0,k=m-1;i<m,k>=0;i++,k--){
		for(int j=0,l=0;j<n,l<n;j++,l++){
			b[l][k]=a[i][j];
		}
	}
	for(int l=0;l<n;l++){
		for(int k=0;k<m;k++){
			if(k==m-1){
				printf("%d",b[l][k]);
			}else{
				printf("%d ",b[l][k]);
			}
		}
		printf("\n");
	}
	return 0;
}

