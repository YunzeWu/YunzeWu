#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	scanf("%d",&n);
	for(int i=0,j=0;i<n;i++,j+=i){
		printf("%d ",j);
	} 
	return 0;
}

