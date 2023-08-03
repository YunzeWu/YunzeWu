#include<bits/stdc++.h>
using namespace std;
int fen[105];
char name[105][25];
int max(int a[],int c){
	int max=a[0];
	int num;
	for(int j=0;j<c;j++){
		if(a[j]>=max){
			max=a[j];
			num=j;
		}
	}
	return num;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&fen[i]);
		scanf("%s",&name[i]);
	} 
	printf("%s",name[max(fen,n)]);
	return 0;
}

