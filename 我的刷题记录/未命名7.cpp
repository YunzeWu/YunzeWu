#include<bits/stdc++.h>
using namespace std;
char s1[20000];
char s2[20000];
void cpy(char * t2,char * t1){
	int i=0;
	while(t1[i]!='\0'){
		t2[i]=t1[i];
		i++;
	}
	t2[i]='\0';
	return;
}
int main(){
	gets(s1);
	cpy(s2,s1);
	printf("%s",s2);
	return 0;
}

