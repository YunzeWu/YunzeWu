#include<bits/stdc++.h>
using namespace std;


int main(){
	int k;
	scanf("%d",&k);
	if(k<=1){
		printf("15");
	} 
	if(k>1){
		int temp;
		temp=k-1;
		int ans;
		ans=temp*5+15;
		printf("%d",ans);
	}
	return 0;
}

