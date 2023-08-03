#include<bits/stdc++.h>
using namespace std;
long long normalPower(long long base,long long power){
	long long result=1;
	for(int i=1;i<=power;i++){
		result=result*base;
		result=result%1000;
	}
	return result%1000;
}
int main(){
	long long m,n;
	while(true){
		cin>>m>>n;
		if(m==0&&n==0) break;
		cout<<normalPower(m,n)<<endl;
	}
	return 0;
}

