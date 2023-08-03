#include<bits/stdc++.h>
using namespace std;
char a[100005][20],b[10005][20];

int main(){
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&a[i]);
		getchar();
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%s",&b[i]);
		getchar();
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(strcmp(b[i],a[j])==0){
				printf("%s\n",b[i]);
				break;
			}
		}
	}
	return 0;
}

