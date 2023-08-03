/*
	Name: 加分二叉树 
	Copyright: yunze_n
	Author: yunze_n
	Date: 19/03/22 18:00
	Description: 诚享教育A班测试平台题目 
*/

#include<bits/stdc++.h>
using namespace std;
int a[105][5];
void it(){
	
} 
void mt(int i){
	
	mt(l[i]);
	mt(r[i]);
	
} 
int dp(int i,int j){
	if(j==0) return 0;
	if(l[i]==0 && r[i]==0){
		return num[i];
	}
	if(f[i][j]!=0) return f[i][j];
	for(int k=0;k<=j-1;k++){
		f[i][j]=max(f[i][j],dp(l[i],k)+dp(r[i],j-1-k)+num[i]);
	}
	return f[i][j];
}

int main(){
	it();
	mt();
	ans=dp(1,x);
	out();
	return 0;
}

