#include<bits/stdc++.h>
using namespace std;
int tox[13]={0,1,-1,0,0,2,-2,0,0,1,-1,1,-1};
int toy[13]={0,0,0,1,-1,0,0,2,-2,-1,1,1,-1};
char a[101][101];
int n,m,s;
inline void dfs(int x,int y)
{
	register int i;
	if(x<1 || x>n || y<1 || y>m)
	{
		return;
	}
	if(a[x][y]!='#')
	{
		return;
	}
	a[x][y]='-';
	for(i=1;i<=12;i++)
	{
		int x1=x+tox[i];
		int y1=y+toy[i];
		dfs(x1,y1);
	}
	return;
}
int main()
{
	int i,j;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i][j]=='#')
			{
				s++;
				dfs(i,j);
			}
		}
	}
	printf("%d",s);
	return 0;
} 
