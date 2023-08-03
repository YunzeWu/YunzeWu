#include<bits/stdc++.h>
using namespace std;
struct num{int a,b;};
void fun(struct num s[],int n){
	int index,j,k;
	struct num temp;
	for(k=0;k<n-1;k++){
		index=k;
		for(j=k+1;j<n;j++){
			if(s[j].b<s[index].b) index=j;
		}
		if(index!=k){
			temp=s[index];
			s[index]=s[k];
			s[k]=temp;
		}
	}
}
int main(){
	int count,i,k,n,m,no;
	struct num s[100];
	cin>>n>>m>>k;
	for(i=0;i<n;i++){
		s[i].a=i+1;
		s[i].b=0;
	}
	i=0;
	count=n=0;
	while(no<n){
		if(s[i].b==0){
			count++;
		}
		if(count==m){
			no++;
			s[i].b=no;
			count=0;
		}
		i++;
		if(i==n){
			i=0;
		}
	}
	fun(s,n);
	printf("%d:%d\n",s[k-1].b,s[k-1].a);
	return 0;
}

