#include<bits/stdc++.h>
using namespace std;
bool shell[5];
int s1,s2,s3;
int main(){
	int n,a,b,g;
	scanf("%d",&n);
	shell[1]=1;
	shell[2]=0;
	shell[3]=0;
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&a,&b,&g);
		bool t=shell[a];
		shell[a]=shell[b];
		shell[b]=t;
		if(shell[g]==1){
			s1++;
		}
	}
	printf("%d	",s1);
	shell[1]=0;
	shell[2]=1;
	shell[3]=0;
	for(int i=0;i<n;i++){
		bool t=shell[a];
		shell[a]=shell[b];
		shell[b]=t;
		if(shell[g]==1){
			s2++;
		}
	}
	printf("%d	",s2);
	shell[1]=0;
	shell[2]=0;
	shell[3]=1;
	for(int i=0;i<n;i++){
		bool t=shell[a];
		shell[a]=shell[b];
		shell[b]=t;
		if(shell[g]==1){
			s3++;
		}
	}
	printf("%d\n",s3);
	int max=s1;
	if(max<s2){
		max=s2;
	}
	if(max<s3){
		max=s3;
	}
	printf("%d",max);
	
	return 0;
}

