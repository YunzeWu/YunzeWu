#include<bits/stdc++.h>
using namespace std;


int main(){
	int hour1,min1,sec1;
	scanf("%d:%d:%d",&hour1,&min1,&sec1);
	int hour2,min2,sec2;
	scanf("%d:%d:%d",&hour2,&min2,&sec2);
	int hourans=0,minans=0,secans=0;
	if(sec2<sec1){
		min2--;
		secans=60-(sec1-sec2); 
	}else{
		secans=sec2-sec1;
	}
	if(min2<min1){
		hour2--;
		minans=60-(min1-min2); 
	}else{
		minans=min2-min1;
	}
	if(hour2<hour1){
		hourans+=hour2;
		hourans+=24-hour1;
	}else{
		hourans=hour2-hour1;
	}
	printf("%02d:%02d:%02d",hourans,minans,secans);
	return 0;
}

