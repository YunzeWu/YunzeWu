#include<bits/stdc++.h>
using namespace std;
char a[105]; 

int main(){
	gets(a);
	bool ans;
	for(int i=0;i<strlen(a);i++){
		if(a[i]==a[strlen(a)-i-1]){
			ans=1;
		}else{
			ans=0;
			break;
		}
	}
	if(ans==1){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}

