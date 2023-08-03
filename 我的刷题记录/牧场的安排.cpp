#include<bits/stdc++.h>
using namespace std;

int n,m,f[1020][1020];
struct node{
	int s[5000],sum;
}a[5020];


void dp()
{
	for(int i=1;i<=a[1].sum ;i++) f[1][i]=1;
	
	for(int i=2;i<=n;i++)
		for(int j=1;j<=a[i].sum ;j++)
		{
			f[i][j]=0;
			for(int k=1;k<=a[i-1].sum ;k++)
			{
				if(!(a[i-1].s[k]&a[i].s[j])) f[i][j]+=f[i-1][k];
			}
		}
		
	/*for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i].sum  ;j++) cout<<f[i][j]<<" ";
		cout<<'\n';
	}*/
		
	int ans=0;
	for(int i=1;i<=a[n].sum ;i++)
	{
		ans=(ans+f[n][i])%100000000;
	}
	
	cout<<ans<<'\n';
}

void prepare(int i,int t)
{
	int num=0;
	for(int j=0;j<(1<<m);j++)
	{
		if(!(j&(j<<1))&&!(j&(j>>1))&&!(j&t))
		{
			a[i].s[++num]=j;
		}
	}
	
	a[i].sum=num;
}

void init()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int t=0;
		for(int j=1;j<=m;j++)
		{
			int x;
			cin>>x;
			t=(t<<1)+1-x;
		}
		prepare(i,t);
	}
}

int main()
{
	init();
//	prepare();
	dp();
	return 0;
}

