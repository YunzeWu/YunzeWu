#include<bits/stdc++.h>
using namespace std;
long long a[105];

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	long long sum=0;
	long long max=0;
	for(int i=1;i<=n;i++){
		sum=0;
		for(int j=i;j<=n;j++){
			sum+=a[j];
			if(sum>max){
				max=sum;
			}
		}
	}
	printf("%lld",max);
	return 0;
}

