#include<bits/stdc++.h>
using namespace std;
int a[100010],b[100010];

int main(){
	int n,m,ans;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++){
		scanf("%d",&b[i]);
	}
	for(int i=1;i<=m;i++){
		int L,R,mid,k;
		L=1,R=n;k=b[i];
		while(L<=R){
			mid=L+(R-L)/2;
			if(k==a[mid]){
				ans=mid;
				L=mid+1;
			}else if(k<a[mid]){
				ans=mid;
				R=mid-1;
			}else if(k>a[mid]){
				L=mid+1;
			}	 
		}
		printf("%d\n",ans);
	}
	return 0;
}

