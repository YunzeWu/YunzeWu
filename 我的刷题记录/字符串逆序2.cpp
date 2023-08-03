#include<bits/stdc++.h>
using namespace std;
char a[20000];

int main(){
	for(int i=0;1;i++){
		scanf("%c",&a[i]);
		if(a[i]=='!'){
			break;
		}
	} 
	for(int i=strlen(a)-2;i>=0;i--){
		printf("%c",a[i]);
	}
	return 0;
}

