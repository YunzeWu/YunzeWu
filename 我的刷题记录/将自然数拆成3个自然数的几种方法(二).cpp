#include<bits/stdc++.h>
using namespace std;
int a[10000][3];

int main(){
	int n,cnt=0;
	scanf("%d",&n);
	int z; 
	for(int i=0;i<=n;i++){
		for(int j=i;j<=n;j++){
			z=n-i-j;
			if(z>=j){
				cnt++;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}

