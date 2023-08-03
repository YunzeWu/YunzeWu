#include<bits/stdc++.h>
using namespace std;
int a[5];
int b[5];
int c[5]; 

int main(){
	int w=0,x=0,y=0,z=0;
	scanf("%d",&z);
	for(int i=4;i>=1;i--){
		a[i]=z%10;
		z/=10;
	}
	for(int j=1;1;j++){
		sort(a+1,a+4+1,greater<int>());
		for(int i=1;i<=4;i++){
			b[i]=a[i];
//			printf("b[%d]=%d\n",i,b[i]);
		}
		sort(a+1,a+4+1);
		for(int i=1;i<=4;i++){
			c[i]=a[i];
//			printf("c[%d]=%d\n",i,c[i]);
		}
		w+=b[1]*1000;
		w+=b[2]*100;
		w+=b[3]*10;
		w+=b[4]*1;
		x+=c[1]*1000;
		x+=c[2]*100;
		x+=c[3]*10;
		x+=c[4]*1;
		y=w-x;
		printf("%d-%d=%d\n",w,x,y);
		if(y==6174){
			return 0;
		}
		for(int i=4;i>=1;i--){
			a[i]=y%10;
			y/=10;
		}
		w=0,x=0,y=0;
	}
	return 0;
}

