#include<bits/stdc++.h>
using namespace std;
char s[105];

int main(){
	gets(s);
	int len=strlen(s);
	bool ans=0;
	for(int i=0;i<len;i++){
		if(s[i]==s[len-i-1]){
			ans=1;
		}else{
			ans=0;
			break;
		}
	}
	if(ans==1){
		printf("yes");
	}else if(ans==0){
		printf("no");
	}
	return 0;
}
