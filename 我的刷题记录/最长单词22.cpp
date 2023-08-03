#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];

int main(){
	char * ans;
	int max=0,num;
	for(int i=0;;i++){
		scanf("%s",a[i]);
		num=i;
		if(a[i][strlen(a[i])-1]=='.'){
			a[i][strlen(a[i])-1]='\0';
			break;
		}
	}
	for(int i=0;i<=num;i++){
		if(strlen(a[i])>max){
			max=strlen(a[i]);
			ans=a[i];
		}
	}
    puts(ans);
	return 0;
}

