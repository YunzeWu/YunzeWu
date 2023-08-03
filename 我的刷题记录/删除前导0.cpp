#include<bits/stdc++.h>
using namespace std;
int a[105];

int main(){
	int n;
	scanf("%d",&n);
	for(int k=0;k<3;k++){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			if(a[i]==0){
				continue;
			}else{
				for(int j=i;j<n;j++){
					if(j==n-1){
						printf("%d\n",a[j]);
					}else{
						printf("%d ",a[j]);
					}
				}
				break;
			}
		}
	}
	return 0;
}

