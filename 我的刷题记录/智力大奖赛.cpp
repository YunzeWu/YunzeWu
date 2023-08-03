#include<bits/stdc++.h>
using namespace std;
long long a[45005];

int main(){
	long long m;
	scanf("%lld",&m);
	printf("%lld\n",m*m);
	for(int i=0;i<m;i++){
		a[i]=m*m;
	}
	int tmp=0;
	for(int i=0;i<=m;i++){
		tmp+=i;
	}
	printf("%lld",tmp*3);
	return 0;
}

