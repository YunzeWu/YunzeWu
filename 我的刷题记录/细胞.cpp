#include<bits/stdc++.h>
using namespace std;
char mat[105][105];
int num=0;int n,m;bool flag[105][105];
int x,y;
int dx[4]={0,0,1,-1};
int dy[4]={-1,1,0,0};
void dfs(int x,int y){
	flag[x][y]=num;
	for(int k=0;k<4;k++){
		int xx=x+dx[k],yy=y+dy[k];
		if(xx>=1 && xx<=n && yy>=1 && yy<=m && flag[xx][yy]==0 && mat[xx][yy]!='0'){
			dfs(xx,yy);
		}
	}
}

int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%s",mat[i]+1);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(!flag[i][j] && mat[i][j]!='0')
				num++,dfs(i,j);
				
		}
	}
	printf("%d",num);
	return 0;
}

