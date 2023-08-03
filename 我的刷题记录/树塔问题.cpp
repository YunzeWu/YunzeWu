#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int n;
void sum(int i,int j,int* p){
	int sum1,sum2;
	sum1=a[i][j]+a[i+1][j];
	sum2=a[i][j]+a[i+1][j+1];
	if(sum1>=sum2){
		*p=sum1;
	} 
	if(sum2>sum1){
		*p=sum2;
	}
	if(i<n){
		sum(i+1,j,p);
		sum(i+1,j+1,p);
	}
	if(i+1==n){
		return;
	}
}
int main(){
	int max;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d",a[i][j]);
		}
	}
	sum(1,1,&max);
	printf("%d",max); 
	return 0;
}
