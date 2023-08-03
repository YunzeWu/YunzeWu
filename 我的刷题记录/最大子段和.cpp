#include<bits/stdc++.h>
using namespace std;
int a[105],sum;
long long ans=-10000000000;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		sum+=a[i];
		if(sum<=a[i]) sum=a[i];
		if(sum>ans) ans=sum;
	}
	cout<<ans;
	return 0;
}
