#include<bits/stdc++.h>
using namespace std;
void a(int m){
	if(m==1){
		printf(" /\\\n");
		printf("/__\\");
	}else if(m==2){
		a(1);
		printf("\n");
		a(1);
		a(1);
	}
	return;
}

int main(){
	int n;
	scanf("%d",&n);
	a(n);
	return 0;
}
