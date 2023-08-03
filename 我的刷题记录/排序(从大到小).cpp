#include<bits/stdc++.h>
using namespace std;
int a[1005];

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int p=n-2;p>=0;p--){
		for(int i=0;i<=p;i++){
			if(a[i]<a[i+1]){
				swap(a[i],a[i+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		if(i!=n-1){
			printf("%d ",a[i]);
		}else{
			printf("%d",a[i]);
		}
	}
	return 0;
}

