#include<bits/stdc++.h>
using namespace std;
int main(){
	int ret=0,x;
	scanf("%d",&x);
	for(;x;x &= x-1){
		ret++;
		printf("x=%d,ret=%d\n",x,ret);
	}
	printf("%d",ret); 
	return 0;
}

