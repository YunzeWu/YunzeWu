#include<bits/stdc++.h> 
using namespace std;


int main(){
	int a,b,x,y,_1,_2,_3;
	scanf("%d%d%d%d",&a,&b,&x,&y);
	_1=abs(a-x)+abs(b-y);
	_2=abs(a-y)+abs(b-x);
	_3=abs(a-b);
	int min=_1;
	if(min>_2){
		min=_2;
	}
	if(min>_3){
		min=_3;
	}
	printf("%d",min);
	return 0;
}

