#include<bits/stdc++.h>
using namespace std;
char s[105];

int main(){
	gets(s);
	int ans;
	for(int i=0;s[i];i++){
		if(s[i]==s[strlen(s)-1-i]){
			ans=1;
		}else{
			ans=0;
			break;
		}
	}
	printf("%s",ans==1?"yes":"no");
	return 0;
}

