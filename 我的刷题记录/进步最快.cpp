#include<bits/stdc++.h>
using namespace std;
struct a{
	int score;
	int ID;
}b[1100]; 
struct rule{
	bool operator()(const a & s1,const a & s2){
		return s1.score>s2.score;
	}
};
int c[10005];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i].score);
		b[i].ID=i;
	}
	sort(b+1,b+n+1,rule());
	for(int i=1;i<=n;i++){
		c[i]=b[i].ID-i;
	}
	int max=-999;
	int f;
	for(int i=1;i<=n;i++){
		if(c[i]>max){
			max=c[i];
			f=i;
		}
	}
	printf("%d\n",f);
	printf("%d",b[f].ID);b
	return 0;
}
