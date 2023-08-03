#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	sort(a,a+n);
	for(int i=0;i<m;i++){
		printf("%d\n",upper_bound(a,a+n,b[i])-a);
	}
	return 0;
}

