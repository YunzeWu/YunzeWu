#include<bits/stdc++.h>
using namespace std;
char s1[1005];

int main(){
	gets(s1);
	int cnt=1;
	for(int i=0;s1[i];i++){
		if(s1[i]==s1[i+1]){
			cnt++;
		}else{
			printf("%d%c",cnt,s1[i]);
			cnt=1;
		}
	}
	return 0;
}

