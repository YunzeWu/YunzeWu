#include<bits/stdc++.h>
using namespace std;
int a[100000];

int main(){
//	freopen("runing.in","r",stdin);
//	freopen("runing.out","w",stdout);
	int n,p;
	double ans;
	scanf("%d%d",&n,&p);
	int cnt=0;
	for(int i=pow(10,n-1);i<pow(10,n);i++){
		int sum=0;
		int temp=i;
	
		for (int j=n-1;j>=0;j--){
			a[j]=temp%10;
//			printf("a[%d]=%d\n",j,a[j]);
			if(a[j]>=a[j+1]){
				sum=sum+a[j];
				temp/=10;
			}else{
				sum=0;
				break;
			}
		}
		if (sum==n){
			printf("i=%d\n",i);
			cnt++;
		}	
	}
	printf("count=%d",cnt);
//	ans=(cnt%p)%(pow(10,9)+7);
//	printf("%d",ans);
	return 0;
}
