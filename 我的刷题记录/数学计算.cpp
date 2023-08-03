#include<bits/stdc++.h>
using namespace std;
int x; 

int main(){
	scanf("%d",&x);
	for(int i=1;i<=98;i++){
		if(x!=1){
			x/=3;
			printf("%d\n",x);
		}else{
			x+=2;
			printf("%d\n",x);
		}
	}
	return 0;
}

