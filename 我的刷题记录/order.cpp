#include<bits/stdc++.h>
using namespace std;
int ans[2000][5];

int main(){
//	freopen("order.in","r",stdin);
//	freopen("order.out","w",stdout);
	int n,min;
	scanf("%d",&n);
	if(n<14){
		printf("-1");
		return 0;
	}
	int a,b,c;
	int i=0;
	for(a=1;a<=n/7;a++){
		for(b=1;b<=(n-7*a)/4;b++){
			for(c=1;c<=(n-7*a-4*b)/3;c++){
				if(7*a+4*b+3*c==n){
					min=a;
					if(b<=min){
						min=b;
					}
					if(c<=min){
						min=c;
					}
					ans[i][0]=a;
					ans[i][1]=b;
					ans[i][2]=c;
					ans[i][3]=min;
					ans[i][4]=a+b+c;
					i++;
				}
				}
			}
		}
		if(i==0){
			printf("-1");
			return 0;
		}
//	for(int j=0;j<i;j++){
//		for(int k=0;k<=4;k++){
//			printf("%3d",ans[j][k]);
//		}
//		printf("\n");
//	}
	int maxtao=ans[0][3];
	for(int j=0;j<i;j++){
		if(ans[j][3]>maxtao){
			maxtao=ans[j][3];
		}
	}
//	printf("%d\n",maxtao);
	int maxsum=0;
	for(int j=0;j<i;j++){
		if(ans[j][3]==maxtao){
			if(ans[j][4]>maxsum){
				maxsum=ans[j][4];
			}
		}
	}
//	printf("%d\n",maxsum);
	for(int j=0;j<i;j++){
		if(ans[j][3]==maxtao&&ans[j][4]==maxsum){
			printf("%d %d %d",ans[j][0],ans[j][1],ans[j][2]);
		}
		}
	
	return 0;
}
