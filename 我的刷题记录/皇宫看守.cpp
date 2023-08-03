#include<bits/stdc++.h>
using namespace std;

int n,x,y,root,ans;
int a[1510],cnum[1510],son[1510][1510],f[1510][10],vis[1510];

void init(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		scanf("%d",&a[x]);
		scanf("%d",&cnum[x]);
		for(int j=1;j<=cnum[x];j++){
			scanf("%d",&y);
			son[x][j]=y;
			vis[y]=1;
		}
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0) root=i;
	}
}
void dp(int x){
	if(cnum[x]==0){
		f[x][1]=a[x];
		f[x][2]=1000000000;
		f[x][3]=0;
		return;
	}
	int y,y1,y2;
	for(int i=1;i<=cnum[x];i++){
		y=son[x][i];
		dp(y);
		f[x][1]+=min(f[y][1],min(f[y][2],f[y][3]));
		f[x][3]+=min(f[y][1],f[y][2]);
		
	}
	int ans1;
	f[x][2]=1000000000;
	for(int i=1;i<=cnum[x];i++){
		y1=son[x][i];
		ans1=f[y1][1];
		for(int j=1;j<=cnum[x];j++){
			y2=son[x][j];
			if(j!=i){
				ans1+=min(f[y2][1],f[y2][2]);
			}
		}
		f[x][2]=min(f[x][2],ans1);
	}
	f[x][1]+=a[x];
}
int main(){
	init();
	dp(root);
	ans=min(f[root][1],f[root][2]);
	printf("%d\n",ans);
	return 0;
}

