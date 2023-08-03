#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int cnt=unique(a,a+n)-a;
	printf("%d\n",cnt);
	for(int i=0;i<cnt ;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

