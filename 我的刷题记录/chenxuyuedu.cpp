#include<algorithm>
#include<iostream>
using namespace std;
int n;
int d[50][2];
int ans;
void dfs(int n,int sum){
	if(n==1){
		ans=max(sum,ans);
		return;
	}
	for(int i=0;i<n;++i){
		int a=d[i-1][0],b=d[i-1][1];
	}
}
