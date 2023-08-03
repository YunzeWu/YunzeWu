#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	int tmp=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<b[i];j++){
			tmp+=a[j];
		}
		printf("%d\n",tmp);
		tmp=0;
	}
	return 0;
}

