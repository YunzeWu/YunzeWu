#include<bits/stdc++.h>
using namespace std;
int a[10]={1,1,3,4,5,5,5,5,11,13}; 

int main(){
	int n=9;
	int x=5;
	int L,R;
	L=0,R=9;
	int mid;
	int ans;
	for(int i=0;i<=n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	while(L<=R){
		mid=L+(R-L)/2;
		if(x==a[mid]){
			ans=mid; 
			L=mid+1;
		}else if(x<a[mid]){
			R=mid-1;
		}else if(x>a[mid]){
			ans=mid;
			R=mid-01;
		}
	}
	printf("%d",ans+1);
	return 0;
}

