#include<bits/stdc++.h>
using namespace std;
char s1[205];
char s2[205];

int main(){
	gets(s1);
	gets(s2);
	if(strlen(s1)>=strlen(s2)){
		if(strstr(s1,s2)!=NULL){
			printf("%s is substring of %s",s2,s1);
		}else {
			printf("No substring");
		}
	}
	if(strlen(s2)>=strlen(s1)){
		if(strstr(s2,s1)!=NULL){
			printf("%s is substring of %s",s1,s2);
		}else{
			printf("No substring");
		}
	}
	
	return 0;
}

