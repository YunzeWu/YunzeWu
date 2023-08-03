#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int sum=0;
	if(n%2!=0){
		for(int i=0;i<=n;i+=2){
			sum+=i;
		}
		printf("%d",sum);
		return 0;
	}
	sum=0;
	int cnt=0;
	if(n%2==0){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i*j==n){
					if(cnt==n/2){
						break;
					}
					sum+=(i+j);
					
//					printf("%d %d %d %d\n",i,j,sum,cnt);
				}
			}
		}
		printf("%d",sum);
		return  0;
	}
	return 0;
}

