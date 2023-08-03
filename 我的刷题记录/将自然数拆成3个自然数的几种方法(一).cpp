#include<bits/stdc++.h>
using namespace std;
int a[10000][3];

int main(){
	int n,cnt=0;
	scanf("%d",&n);
	int number=0;
	for(int i=0;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=j;k<=n;k++){
				if(i+j+k==n){
					cnt++;				
				}
			}
		}
	}
	printf("%d",cnt);
	return 0;
}

