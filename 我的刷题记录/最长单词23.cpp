#include<bits/stdc++.h>
using namespace std;
char a[500];
char ans[600];

int main(){
	int lenth=0,max=0,flag=1;
	while(flag){
		scanf("%s",a);
		lenth=strlen(a);
		if(a[lenth-1]=='.'){
			a[--lenth]='\0';
			flag=0;
		}
		if(lenth>max){
			max=lenth;
			strcpy(ans,a);
		}
	}
	puts(ans);	
	return 0;
}

