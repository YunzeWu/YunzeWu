#include<bits/stdc++.h>
using namespace std;
char a[55];
int main(){
	int n;
	scanf("%d",&n);
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++){
		a[i]=(a[i]-'a'+n)%26+'a';
	}
	printf("%s",a);
	return 0;
}

