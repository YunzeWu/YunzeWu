#include<bits/stdc++.h>
using namespace std;
const int MAXN=2500+100;
const int MAXM=6200+100;
struct edge{
    int u,v,len,nxt;
};
edge e[2*MAXM+100];
int head[MAXN+100];
int cnt,n,m,st,ed,u,v,len;
int dis[MAXN+100];
bool vis[MAXN];
void add(int u,int v,int len){
    cnt++;
    e[cnt].u=u;
    e[cnt].v=v;
    e[cnt].len=len;
    e[cnt].nxt=head[u];
    head[u]=cnt;
}
int main(){
    scanf("%d%d",&n,&m);
    cnt=0;
    for(int i=1;i<=m;i++){
        scanf("%d%d%d",&u,&v,&len);
        add(u,v,len);
        add(v,u,len);
    }
    for(int i=1;i<=n;i++){
        dis[i]=1e9;
        vis[i]=false;
    }
    dis[1]=0;
    for(int p=1;p<=n;p++){
        int mindis=1e9;
        int k=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==false && dis[i]<mindis){
                mindis=dis[i];
                k=i;
            }
        }
        vis[k]=true;
        for(int i=head[k];i;i=e[i].nxt){
            v=e[i].v;
            len=e[i].len;
            if(dis[v]>dis[k]+len){
                dis[v]=dis[k]+len;
            }
        }
    }
    if(dis[n]==1e9) cout<<"-1";
    else printf("%d\n",dis[n]);
    return 0;
}
