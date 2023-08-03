#include<bits/stdc++.h>
using namespace std;
char s1[505][505];
char s2[505];
char ans[505];

int main(){
	gets(s2);
	char *p=strtok(s2," .");
	strcpy(s1[0],p);
	int i=1;
	while(p!=NULL){
		p=strtok(NULL," .");
		strcpy(s1[i],p);
		printf("1");
//		puts(s1[i]);
		i++;
	}
	int max=-1;
	for(int i=0;s1[i];i++){
		if(strlen(s1[i])>=max){
			max=strlen(s1[i]);
			strcpy(ans,s1[i]);
		}
		puts(s1[i]);
	}
	puts(ans);
	return 0;
}

