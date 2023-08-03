#include<bits/stdc++.h>
using namespace std;
int a[100005];
long long sum[100005];
int main(){
	int n;
	int m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		sum[i]=sum[i-1]+a[i];
//		printf("%d ",sum[i]);
	}
	int x,y;
	for(int i=1;i<=m;i++){
		scanf("%d%d",&x,&y);
//		printf("%lld       %lld\n",sum[y],sum[x-1]);
		printf("%lld\n",sum[y]-sum[x-1]);
	}
	return 0;
}

