#include<bits/stdc++.h>
using namespace std;
int a[15][15];

int main(){
	int m;
	scanf("%d",&m);
	int n=m;
	int cnt=1,tmp,j=1,i=1,q=1;
	for(;m>0;m-=1,++j,++q){
		for(;j<=m;j++){
			a[i][j]=cnt;
			cnt++;
		}
		j-=1;
		i++;
		for(;i<=m;i++){
			a[i][j]=cnt;
			cnt++;
		}
		i-=1;
		j-=1;
		for(;j>=q;j--){
			a[i][j]=cnt;
			cnt++;
		}
		j+=1;
		i-=1;
		for(;i>=q+1;i--){
			a[i][j]=cnt;
			cnt++;
		}
		i+=1;
	}
	
	
	for(int k=1;k<=n;k++){
		for(int o=1;o<=n;o++){
			printf("%3d",a[k][o]);
		}
		printf("\n");
	}
	return 0;
}

