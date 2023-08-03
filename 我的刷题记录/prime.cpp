#include<bits/stdc++.h>
using namespace std;
int prime(int n){
	int i,y=1;
	for(i=2;i*i<=n;i++){
		if(n%i == 0){
			y=0;
			break;
		}
	}
	return y;
} 
int main(){
	int m=90,n=100;
	while(m!=(n+1)){
		if(prime(m)==1) cout<<m<<" ";
		m++;
	}
	return 0;
	return 0;
}

