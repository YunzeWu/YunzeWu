#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y,z;
	for(x=1;x<=20;x++){
		for(y=1;y<=33;y++){
			z=100-y-x;
			if(x*5+y*3+z*(1.0*1/3)==100&&z%3==0){
				printf("%d %d %d\n",x,y,z);
			}
		}
	}
	return 0;
}

