#include<bits/stdc++.h>
using namespace std;
int a[1005]; 
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n,greater<int>());
	for(int i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
	return 0;
}

