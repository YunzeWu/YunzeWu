#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	scanf("%d",&n);
	for(int i=0,j=13;i<n;i++,j-=1){
		if(i%2==0){
			printf("2 ");
		}
		else{
			printf("%d ",j);
		}
	}
	return 0;
}

