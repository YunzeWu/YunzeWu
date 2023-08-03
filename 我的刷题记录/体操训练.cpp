#include<bits/stdc++.h>
using namespace std;
int a[30][30]; 

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int b,c,cnt1=0,cnt2=0;
		for(int j=1;j<=m;j++){
			for(int k=1;k<=m;k++){
				if(j==k){
					continue;
				}
//				printf("j=%d    k=%d\n",j,k);
				for(int l=1;l<=n;l++){
					for(int o=1;o<=m;o++){
						if(a[l][o]==j){
							b=o;
//							printf("b=%d\n",b);
						}
						if(a[l][o]==k){
							c=o;
//							printf("c=%d\n",c);
						}
					}
					if(b<c){
						cnt1++;
					}
				}
//				printf("cnt1=%d\n",cnt1);
				if(cnt1==n){
					cnt2++;
				}
				cnt1=0;
			}
		}
	printf("%d",cnt2);
	return 0;
}
