#include<bits/stdc++.h>
using namespace std;
int cnt[10]; 

int main(){
	int days=0,wh,year=1900,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(year==1900){//1
			days+=13;
		}else{
			days+=31;
		}
		wh=days%7;
		cnt[wh]++;
		days+=31;//2
		wh=days%7;
		cnt[wh]++;
		if((year%4==0&&year%100!=0) || year%400==0){//3
			days+=29;
		}else{
			days+=28;
		}
		wh=days%7;
		cnt[wh]++;
		days+=31;//4
		wh=days%7;
		cnt[wh]++;
		days+=30;//5
		wh=days%7;
		cnt[wh]++;
		days+=31;//6
		wh=days%7;
		cnt[wh]++;
		days+=30;//7
		wh=days%7;
		cnt[wh]++;
		days+=31;//8
		wh=days%7;
		cnt[wh]++;
		days+=31;//9
		wh=days%7;
		cnt[wh]++;
		days+=30;//10
		wh=days%7;
		cnt[wh]++;
		days+=31;//11
		wh=days%7;
		cnt[wh]++;
		days+=30;//12
		wh=days%7;
		cnt[wh]++;
		year++;
	}
	printf("%d %d %d %d %d %d %d",cnt[6],cnt[0],cnt[1],cnt[2],cnt[3],cnt[4],cnt[5]);
	return 0;
}

