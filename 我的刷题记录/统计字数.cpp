#include<bits/stdc++.h>
using namespace std;
char a[1005];

int main(){
	int cnt1=0,cnt2=0;
	gets(a);
	for(int i=0;1;i++){
		if(a[i]>='0'&&a[i]<='9'){
			cnt2++;
		}
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'){
			cnt1++;
		}
		if(a[i]=='\0'){
			break;
		} 
	}
	printf("%d %d",cnt1,cnt2);
	return 0;
}

