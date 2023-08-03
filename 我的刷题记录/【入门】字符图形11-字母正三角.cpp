#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	char a='A';
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		a='A';
		for(int k=1;k<=n-i;k++){
			printf(" ");
		}
		for(int j=1;j<=i*2-1;j++){			
			printf("%c",a++);
		}
		printf("\n");
	}
	return 0;
}

