#include<bits/stdc++.h>
using namespace std;
long long a[1000005];

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	long long sum=0;
	long long max=0;
	for(int i=1;i<=n;i++){
		sum+=a[i];
		if(sum>max){
			max=sum;
		}
		if(sum<0) sum=0;
	}
	printf("%lld",max);
	return 0;
}

