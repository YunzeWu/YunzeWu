#include<bits/stdc++.h>
using namespace std;
char a[505];
int main(){
	int sta=0,end,i;
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			end=i-1;
			for(int j=end;j>=sta;j--){
				printf("%c",a[j]);
			}
			printf(" ");
			sta=i+1;
		}
	}
	end=i-1;
	for(int j=end;j>=sta;j--){
		printf("%c",a[j]);
	}
	return 0;
}

