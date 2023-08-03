#include<bits/stdc++.h>
using namespace std;
int a[5],b[2],c[5],d[2];

int main(){
	int cntf=0,cntb=0;
	scanf("%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&b[0],&b[1]);
	scanf("%d%d%d%d%d%d%d",&c[0],&c[1],&c[2],&c[3],&c[4],&d[0],&d[1]);
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(a[i]==c[j]){
				cntf++;
			}
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(b[i]==d[j]){
				cntb++;
			}
		}
	}
	if(cntf==5&&cntb==2){
		printf("5000000");
		return 0;
	}
	if(cntf==5&&cntb==1){
		printf("250000");
		return 0;
	}
	if((cntf==5&&cntb==0)||(cntf==4&&cntb==2)){
		printf("3000");
		return 0;
	}
	if((cntf==3&&cntb==2)||(cntf==4&&cntb==1)){
		printf("200");
		return 0;
	}
	if((cntf==3&&cntb==1)||(cntf==4&&cntb==0)||(cntf==2&&cntb==2)){
		printf("10");
		return 0;
	}
	if((cntf==3&&cntb==0)||(cntf==2&&cntb==1)||(cntf==1&&cntb==2)||(cntf==0&&cntb==2)){
		printf("5");
		return 0;
	}
	printf("0"); 
	return 0;
}

