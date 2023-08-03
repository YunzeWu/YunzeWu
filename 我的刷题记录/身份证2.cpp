#include<bits/stdc++.h>
using namespace std;
int id[20];
int main(){
	for(int i=1;i<=18;i++){
		scanf("%d",&id[i]);
	}
	int year,month,day;
	year=id[7]*1000+id[8]*100+id[9]*10+id[10]*1;
	printf("%d",year);
	printf("生日：%d年月日",year);
	return 0;
}
//330205201006217519
