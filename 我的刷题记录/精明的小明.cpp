#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;int min=-100;
	scanf("%d",&n);
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>n && b>n && c>n){
		printf("%d",n);
		return 0;
	}else{
		
		if(a<b){
			min=a;
		}else{
			min=b;
		}
		if(min>c){
			min=c;
		}
	}
	int tmp=n-min;
	printf("%d",tmp);
	return 0;
}

