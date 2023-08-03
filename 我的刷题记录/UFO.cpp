#include<bits/stdc++.h>
using namespace std;
char a[10],b[10];

int main(){
	int e=1,f=1;
	scanf("%s",a);
	scanf("%s",b);
	for(int i=0;i<strlen(a);i++){
		e*=a[i]-64;
	}
	for(int i=0;i<strlen(b);i++){
		f*=b[i]-64;
	}
	e%=47;
	f%=47;
	if(e==f){
		printf("GO");
	}else{
		printf("STAY");
	}
	return 0;
}

