#include<bits/stdc++.h>
using namespace std;

int f(int a){
	if (a==1){
		printf("1");
		return 0;
	}else{
		printf("%d,1",a-1);
		f(a-1);
		return 0;
	}
}


int main(){
//	freopen("","r",stdin);
//	freopen("","w",stdout);
	int n;
	scanf("%d",n);
	f(n);
	


	return 0;
}

