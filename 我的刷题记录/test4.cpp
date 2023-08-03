
#include<bits/stdc++.h>using namespace std;
int n,day[400][13],BF[7]={1,1,3,1,2,2,2};
int leap[400];
int main(){
	day[0][1]=6; day[0][4]=5; day[0][7]=5; day[0][10]=6;
	day[0][2]=2; day[0][5]=0; day[0][8]=1; day[0][11]=2;
	day[0][3]=2; day[0][6]=3; day[0][9]=4; day[0][12]=4;
	for(int i=1900;i<=2299;i++){
		if(!(i%4)) leap[i-1900]=1;
		if(!(i%100)) leap[i-1900]=0;
		if(!(i%400)) leap[i-1900]=1;
	}
	scanf("%d",&n);
	for(int i=1;i<=n-1;i++){
		int k=i-1;
		for(int j=1;j<=12;j++){
			if(j<=2&&leap[k]||j>=3&&leap[i]) day[i][j]=(day[i-1][j]+2)%7;
			else day[i][j]=(day[i-1][j]+1)%7;
			BF[day[i][j]]++;
		}
	}
	for(int i=0;i<=6;i++) printf("%d ",BF[(i+6)%7]);
	return 0;
}
