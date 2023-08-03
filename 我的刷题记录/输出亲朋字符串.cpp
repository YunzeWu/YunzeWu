#include<bits/stdc++.h>
using namespace std;
char s1[1005]; 

int main(){
	gets(s1);
	int len;
	len=strlen(s1);
	for(int i=0;i<len;i++){
		if(i==len-1){
			printf("%c",s1[0]+s1[i]);
		}else{
			printf("%c",s1[i]+s1[i+1]);
		}
	}
	return 0;
}

