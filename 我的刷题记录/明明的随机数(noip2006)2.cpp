#include<bits/stdc++.h>
using namespace std;
int a[105];
int b[105];
int main(){
	int n,ans=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	b[0]=a[0];
	for(int i=1;i<n;i++){
		if(a[i]==a[i-1]){
			b[i]=0;
		}else{
			b[i]=a[i];
			ans=ans+1;
		}
	}
	printf("%d\n",ans);
	for(int i=0;i<n;i++){
		if(b[i]==0){
			continue;
		}else{
			printf("%d ",b[i]);
		}
	}
	return 0;
}

