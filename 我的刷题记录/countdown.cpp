#include<bits/stdc++.h>
using namespace std;
int cnt;

int main(){
	scanf("%d",&cnt);
	cnt--;
	int t;
	while(1){
		scanf("%d",&t);
		if(cnt==0){
			printf("Well Done\n");
			break;
		}
		if(t==1){
			cnt-=1;
			printf("You finish one thing.\n");
			t=0;
		}else{
			printf("Please enter again.\n");
		}
	}
	return 0;
}

