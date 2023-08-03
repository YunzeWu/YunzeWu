#include<bits/stdc++.h>
using namespace std;
char a[25];

int main(){
	gets(a);
	int ans;
	if(a[0]>='0'&&a[0]<='9'){
		ans=0;
	}else{
		for(int i=0;i<=strlen(a)-1;i++){
			if((a[i]>='A'&&a[i]<='Z')||
			(a[i]>='a'&&a[i]<='z')||
			(a[i]>='0'&&a[i]<='9')||
			(a[i]=='_')){
				ans=1;
			}else{
				ans=0;
				break;
			}
		}
	}
	printf("%s",ans==1?"yes":"no");
	return 0;
}

