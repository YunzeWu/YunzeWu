#include<bits/stdc++.h>
using namespace std;
int cnt[10]; 

int main(){
	int days=0,wh,year=1900,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++,year++){
		for(int month=1;month<=12;month++){
			if(month==1&&year==1900){
				days+=13;
			}
			if(month==1&&year!=1900){
				days+=31;
			}
			if(month==3){
				if((year%4==0&&year%100!=0) || year%400==0){
					days+=29;
				}else{
					days+=28;
				}
			}
			if(month==2||month==4||month==6||month==8||month==9||month==11){
				days+=31;
			}
			if(month==5||month==7||month==10||month==12){
				days+=30;
			}
			wh=days%7;
			cnt[wh]++;
		}
	}
	printf("%d %d %d %d %d %d %d",cnt[6],cnt[0],cnt[1],cnt[2],cnt[3],cnt[4],cnt[5]);
	return 0;
}

