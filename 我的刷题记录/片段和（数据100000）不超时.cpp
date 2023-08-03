#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
long long sum[100005];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		sum[i]=sum[i-1]+a[i];
	}
	int m;
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&b[i]);
	}
	for(int i=1;i<=m;i++){
		printf("%lld\n",sum[b[i]]);
	}
	return 0;
}

