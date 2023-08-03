#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];

int main(){
	int max=0,lenth;
	for(int i=0;;i++){
		scanf("%s",a[i]);
		puts(a[i]);
		if(a[i][strlen(a[i])-1]=='.'){
			
			lenth=strlen(a[i])-1;
		}else{
			lenth=strlen(a[i]);
		}
		if(lenth>max){
			printf("oh\n");
			max=lenth;
		}
		if(getchar()=='\n'){
			break;
		}
	}
	printf("max=%d\n",max);
	for(int i=0;a[i]!='\0';i++){
		if(strlen(a[i])==max){
			printf("%s",a[i]);
			break;
		}
	}
	return 0;
}

