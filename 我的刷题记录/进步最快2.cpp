#include<bits/stdc++.h>
using namespace std;
int a[1100],b[1100],c[1100];

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int max=-1;
	int f;
	for(int j=1;j<=n;j++){
		for(int i=1;i<=n;i++){
			if(max<a[i]){
				max=a[i];
				f=i;
			}
		}
		b[j]=f;
		a[f]=-1;
		max=-1;
	}
	max=-1;
	for(int i=1;i<=n;i++){
		c[i]=b[i]-i;
		if(max<c[i]){
			max=c[i];
			f=i;
		}
	}
	printf("%d\n",f);
	printf("%d",b[f]);
	return 0;
}

