#include<bits/stdc++.h>
using namespace std;
char s1[10000];

int main(){
	gets(s1);
	for(int i=strlen(s1)-2;i>=0;i--){
		printf("%c",s1[i]);
	}
	return 0;
}

