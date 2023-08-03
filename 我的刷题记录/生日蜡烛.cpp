#include<bits/stdc++.h>
using namespace std;


int main(){
	for(int i=0;i<=236;i++){
		for(int j=i;j<=236;j++){
			if(1.0*((i+j)*(j-i+1))/2==236){
				printf("%d %d\n",i,j);
			}
		}
	}
	return 0;
}

