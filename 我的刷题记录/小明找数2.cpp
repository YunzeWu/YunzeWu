#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	sort(a,a+n);
	for(int i=0;i<m;i++){
		if(binary_search(a+0,a+n,b[i])==true){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	return 0;
}

