#include<bits/stdc++.h>
using namespace std;
int a[105][105];

int main(){
	int ic,jc,sum=0,max=0,n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
			if(max<a[i][j]){
				max=a[i][j];
				ic=i;
				jc=j;
			}
		}
	}
	for(int i=1;i<=ic;i++){
		sum+=a[i][1];
	}
	for(int i=2;i<=jc;i++){
		sum+=a[ic][i];
	}
	printf("%d",sum);
	return 0;
}
