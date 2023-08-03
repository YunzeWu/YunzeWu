#include<bits/stdc++.h>
using namespace std;
stack<int> stnum;
char tmp[100];

int main(){
	while(scanf("%s",tmp) && tmp[0]!='@'){
		if(tmp[0]>='0' && tmp[0]<='9'){
			int x;
			sscanf(tmp,"%d",&x);
			x%=10000;
			stnum.push(x);
		}else if(tmp[0]=='+'){
			int x,y;
			y=stnum.top(); stnum.pop();
			x=stnum.top(); stnum.pop();
			stnum.push((x+y)%10000);
		}else{
			int x,y;
			y=stnum.top(); stnum.pop();
			x=stnum.top(); stnum.pop();
			stnum.push((x*y)%10000);
		}
	}
	printf("%d\n",stnum.top());
	return 0;
}

