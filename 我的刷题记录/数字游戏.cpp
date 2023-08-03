#include<bits/stdc++.h>
using namespace std;
char a[10];
int main(){
	int ans=0;
	char x;
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='1'){
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
