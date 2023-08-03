#include<bits/stdc++.h>
using namespace std;

bool M[110][110];
int s[110][110];
int l[110],r[110],num[110];
int f[110][110];
int n,q,x,y,z,ans;
void bt(int x){
	for(int i=1;i<=n;i++){
		if(M[x][i]){
			l[x]=i;
			num[i]=s[x][i];
			M[x][i]=false;
			M[i][x]=false;
			bt(i);
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if(M[x][i]){
			r[x]=i;
			num[i]=s[x][i];
			M[x][i]=false;
			M[i][x]=false;
			bt(i);
			break;
		}
	}
}

int dp(int x,int y){
	if(y==0) return 0;
	if(l[x]==0&&r[x]==0) return num[x];
	if(f[x][y]>0) return f[x][y];
	for(int k=0;k<=y-1;k++){
		f[x][y]=max(f[x][y],dp(l[x],k)+dp(r[x],y-k-1)+num[x]);
	}
	return f[x][y];
}


int main(){
	scanf("%d%d",&n,&q);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			M[i][j]=false;
		}
	}
	for(int i=1;i<=n-1;i++){
		scanf("%d%d%d",&x,&y,&z);
		M[x][y]=true;
		M[y][x]=true;
		s[x][y]=z;
		s[y][x]=z;
	}
	bt(1);
	int ans=dp(1,q+1);
	printf("%d",ans);
	return 0;
}

