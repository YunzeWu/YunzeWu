#include<bits/stdc++.h>
using namespace std;


int main(){
	int k;
	scanf("%d",&k);
	if(k%2!=0){
		for(int i=k+1;i<=100;i+=2){
			printf("%d\n",i);
		}
	}else{
		for(int i=k;i<=100;i+=2){
			printf("%d\n",i);
		}
	}
	return 0;
}

