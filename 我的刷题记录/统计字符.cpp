#include<bits/stdc++.h>
using namespace std;
char a[99999];

int main(){
	int cnt=0;
	for(int i=0;1;i++){
		scanf("%c",&a[i]);
		if(a[i]=='#'){
			break;
		}
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}

