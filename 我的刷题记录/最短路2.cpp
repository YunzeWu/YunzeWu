#include <bits/stdc++.h>
using namespace std;
const int N=2e6+5;  
struct edge
{
	int nxt ,to ,v ;
}e[N];
int n,m,dis[N],tot,s[N];
bool vis[N];
void add(int x,int y,int w)
{
	e[++tot].to = y;e[tot].v = w;
	e[tot].nxt = s[x];s[x] = tot;
}
void SPFA()
{
	queue<int> q;
	memset(dis,0x3f,sizeof(dis));
	dis[1] = 0; vis[1] = 1;
	q.push(1);
	while(!q.empty())
	{
	 int i=q.front();q.pop();
	 for(int k=s[i];k;k=e[k].nxt)
	 {
	  int j=e[k].to;
	  if(dis[j]>dis[i]+e[k].v)
	  {
	  	dis[j]=dis[i]+e[k].v;
	  	if(!vis[j])q.push(j),vis[j]=1;
	  }
	 }
	 vis[i]=0;
	}
}
int main()
{
	cin>>n>>m;
	for(int x,y,v,i=1;i<=m;i++)
	{
	 scanf("%d%d%d",&x,&y,&v);
	 add(x,y,v);
	 add(y,x,v);
	}
	SPFA();
	cout<<dis[n];
}
