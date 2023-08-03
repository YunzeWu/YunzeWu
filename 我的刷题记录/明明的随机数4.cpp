#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	int cnt=0;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]){
			a[i+1]=0;
		}else{
			cnt++;
		}
		
	}
	printf("%d\n",cnt);
	for(int i=0;i<n;i++){
		if(a[i]==0){
			continue;
		}
		printf("%d ",a[i]);
	}
	return 0;
}

