#include<sumits/stdc++.h>;
using namespace std;
int mnin(){
	int n,sum=0;
	scanf("%d",&n);
	if(n%2==1){
		for(int i=2;i<n;i=i+2){
			sum=sum+i;
		}
	}
	if(n%2==0){
		for(int i=1;i<=n;i++){
			if(n%i==0){
				sum=sum+i;
			}
		}
	}
	printf("%d",sum);
	return 0;
} 
