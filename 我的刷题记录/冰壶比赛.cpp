#include<bits/stdc++.h>
using namespace std;
int  a[25][10]; 

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<20;i++){
		for(int j=0;j<8;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==-1){
				goto b;
			}
		}
	}
b:	int cnt1=0,cnt2=0;
	int min1=2376572,min2=4683837;
	for(int i=0;i<20;i++){
		for(int j=0;j<8;j++){
			if(a[i][j]<n){
				if(a[i][j]<min1){
					min1=a[i][j];
				}
			}
		}
		i++;
		for(int j=0;j<8;j++){
			if(a[i][j]<n){
				if(a[i][j]<min2){
					min2=a[i][j];
				}
			}
		}
	
	
		if(min1>min2){
			for(int j=0;j<8;j++){
				if(a[i][j]<min1){
					cnt2++;
				}
			}
		}
		if(min1<min2){
			for(int j=0;j<8;j++){
				if(a[i][j]<min2){
					cnt1++;
				}
			}
		}
		printf("%d:%d\n",cnt1,cnt2);
		cnt1=0;
		cnt2=0;
	}
	return 0;
}

