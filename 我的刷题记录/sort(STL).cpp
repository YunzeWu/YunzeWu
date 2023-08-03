#include<bits/stdc++.h>
using namespace std;
struct rule1{
	bool operator() (const int & b1,const int & b2){
		return b1>b2;
	}
};
struct rule2{
	bool operator() (const int & a1,const int & a2){
		return a1%10<a2%10;
	}
};
int a[6]={12,45,3,98,21,7};
int main(){
	sort(a,a+6);
	for(int i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	sort(a,a+6,rule1());
	for(int i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	sort(a,a+6,rule2());
	for(int i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

