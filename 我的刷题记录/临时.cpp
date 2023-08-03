#include<bits/stdc++.h>
using namespace std;
int p[11],dp[13][105],a;
int main() {
	for(int i=1;i<=10;i++){
		cin>>p[i];
	}
	cin>>a;
	for(int i=1;i<=a;i++){
		dp[0][i]=1e6;
	}
	for(int i=1;i<=10;i++){
		for(int j=1;j<=a;j++){
			dp[i][j]=0xff;
			if(j<=i){
				dp[i][j]=min(dp[i-1][j],p[i]);
			}else{
				dp[i][j]=min(dp[i][j-i]+p[i],dp[i-1][j]);
			}
		}
	}
	cout<<dp[10][a];
	return 0;
}
