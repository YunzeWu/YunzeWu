#include<bits/stdc++.h>
using namespace std;


int main(){
	int hour1,min1,sec1;
	scanf("%d:%d:%d",hour1,min1,sec1);
	int hour2,min2,sec2;
	scanf("%d:%d:%d",hour2,min2,sec2);
	printf("%d:%d:%d",abs(24-hour1)+hour2,abs(00-min1)+min2,abs(00-sec1)+sec2);
	return 0;
}

