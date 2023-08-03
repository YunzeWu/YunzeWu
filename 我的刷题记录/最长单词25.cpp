#include<bits/stdc++.h>
using namespace std;
char s[505];
char ans[505];
int maxx,len;

int main(){
	int cnt=0;
	while(scanf("%s",s)!=EOF){
		cnt++;
		len=strlen(s);
		if(s[len]=='.'){
			len--;
		}
		if(maxx<len){
			strcpy(ans,s);
			if(ans[strlen(ans)-1]=='.'){
				ans[strlen(ans)-1]='\0';
			}
			maxx=len;
		}
	}
	puts(ans);
	return 0;
}

