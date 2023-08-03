#include<bits/stdc++.h>
using namespace std;
int n;
int a[25][25];
int main()
{
	cin>>n;
	int num=0;
	for(int i=1; i<=n/2+1; i++){
		for(int j=i; j<=n-i+1; j++){
			a[i][j]=++num;
		}
		for(int j=i+1; j<=n-i+1; j++){
			a[j][n-i+1]=++num;
		}
		for(int j=n-i; j>=i; j--){
			a[n-i+1][j]=++num;
		}
		for(int j=n-i; j>=i+1; j--){
			a[j][i]=++num;
		}
	}	
	int ans=0, sum=0;
	for(int i=1; i<=n; i++){
		ans+=a[i][i];
	}
	int x=n;
	for(int i=1; i<=x; i++){
		sum+=a[i][n]; n--;
	}
	cout<<ans*sum;
	return 0;
}
