#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int cnt=0;
	for(int i=n;i<=m;i++)
		if(i%6==0 || i%8==0)
			cnt++;
	printf("%d",cnt);
	return 0;
}

