#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int anx=1;
	while(b){
		if(b&1) anx=anx*a;
		a=a*a;
		b>>=1;
	}
	printf("%d\n",anx);
	return 0;
}

