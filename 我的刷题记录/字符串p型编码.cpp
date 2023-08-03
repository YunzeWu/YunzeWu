#include<bits/stdc++.h>
using namespace std;
char str[1005];

int main(){
	 gets(str);
	 int cnt=1;
	 for(int i=0;str[i]!='\0';i++){
	 	if(str[i]==str[i+1]){
	 		cnt++;
		}else{
			printf("%d%c",cnt,str[i]);
			cnt=1;
		}
	 }
	return 0;
}

