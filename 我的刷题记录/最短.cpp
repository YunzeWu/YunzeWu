#include<bits/stdc++.h>
using namespace std;
char a[3000];

int main(){
	int k;
	int cnt=0;
	scanf("%d",&k);
	getchar();
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]==a[i+1]){
			cnt++;
		}else{
			cnt=0;
		}
		if(cnt+1>=k){
			printf("%c",a[i]);
			return 0;
		}
	}
	printf("No");
	return 0;
}
