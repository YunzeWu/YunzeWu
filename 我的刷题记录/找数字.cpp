#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	scanf("%d",&n);
	int cnt=0;
	for(int i=1;i<=n;i++){
		if( i%10 == i/10%10){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

