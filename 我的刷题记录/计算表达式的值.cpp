#include<bits/stdc++.h>
using namespace std;
stack<long long> stnum;
stack<char> stop;
int pri[128];
char s[10005];
char tmp[10005]; 
long long calc(long long x,long long y,char op){
	if(op=='+') return x+y;
	if(op=='-') return x-y;
	if(op=='*') return x*y;
	if(op=='/') return x/y;
}
int main(){
	pri['+']=pri['-']=100;
	pri['*']=pri['/']=200;
	pri['(']=50;
	pri['=']=75;
	pri[' ']=0; stop.push(' ');
	scanf("%s",tmp);
	int i=0;
	while(tmp[i]){
		if(tmp[i]=='('){
			stop.push(tmp[i++]);
		}else if(tmp[i]==')'){
			i++;
			while(stop.top()!='('){
				int x,y;
				y=stnum.top(); stnum.pop();
				x=stnum.top(); stnum.pop();
				char op;
				op=stop.top();
				stop.pop();
				stnum.push(calc(x,y,op));
			}
			stop.pop();
		}else if(tmp[i]>='0' && tmp[i]<='9'){
			long long num=0;
			while(tmp[i]>='0' && tmp[i]<='9'){
				num=num*10+tmp[i]-48;
				i++;
			}
			stnum.push(num);
		}else{
			while(pri[stop.top()]>=pri[tmp[i]]){
				int x,y;
				y=stnum.top(); stnum.pop();
				x=stnum.top(); stnum.pop();
				char op;
				op=stop.top();
				stop.pop();
				stnum.push(calc(x,y,op));
			}
			stop.push(tmp[i++]);
		}
	}
	printf("%d\n",stnum.top());
	return 0;
}

