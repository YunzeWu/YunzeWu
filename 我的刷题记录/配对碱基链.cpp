#include<bits/stdc++.h>
using namespace std;


int main(){
	char t;
	while(1){
		scanf("%c",&t);
		if(t=='\n'){
			break;
		}
		if(t=='A'){
			printf("T");
		}
		if(t=='T'){
			printf("A");
		}
		if(t=='G'){
			printf("C");
		}
		if(t=='C'){
			printf("G");
		}
	}
	return 0;
}

