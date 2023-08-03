#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];

int main(){
	int n,m,tmp;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<m;i++){
		printf("%d\n",lower_bound(a,a+n,b[i])-a-1+1);
	}
	return 0;
}

