#include<bits/stdc++.h>
using namespace std;
int a[10000][3];

int main(){
	int n;
	long long cnt=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		if((n-i)/2-i+1>0){
			cnt+=(n-i)/2-i+1;
		}
	}
	printf("%lld",cnt);
	return 0;
}

