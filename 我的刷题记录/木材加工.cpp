#include<bits/stdc++.h>
using namespace std;
int a[55],n,minn=400000,ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<minn) minn=a[i];
	}
	while(ans<n)
	{
		ans=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]%minn==0) ans++;
		}
		minn--;
	}
	cout<<minn+1;
}
