#include<bits/stdc++.h>
using namespace std;
void gujiao(int n){
	if(n==1){
		printf("End");
		return;
	}
	if(n%2==0){
		printf("%d/2=%d\n",n,n/2);
		gujiao(n/2);
		return;
	}else{
		printf("%d*3+1=%d\n",n,n*3+1);
		gujiao(n*3+1);
		return;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	if(n==1){
		printf("End");
	} 
	if(n!=1){
		gujiao(n);
	}
	return 0;
}
