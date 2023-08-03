#include<bits/stdc++.h>
using namespace std;
int t,x[100],a[100];
void work(int d,int i,int n){
	int k;
	if(n==1){
		for(k=0;k<d;k++){
			printf("%3d",a[k]);
			printf("\n");
		}
	}else{
		for(k=i;k<t;k++){
			if(n%x[k]==0){
				a[d]=x[k];
				work(d+1,k,n/x[k]);
			}
		}
	}
}
int main(){
	int i,k,n;
	cin>>n;
	for(i=n;i>1;i--){
		if(n%i==0){
			x[t++]=i;
		}
	}
	work(0,0,n);
	return 0;
}

