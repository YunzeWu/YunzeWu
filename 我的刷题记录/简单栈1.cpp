#include<bits/stdc++.h>
using namespace std;


int main(){
	char tmp[5];
	while(scanf("%s",tmp) != EOF){
		if(tmp[0]=='I'){
			int x;
			scanf("%d",&x);
			st.push(x);
		}else{
			if(!st.empty()){
				printf("%d\n",st.top());
				st.pop();
			}else{
				printf("ERROR\n");
			}
		}
	}
	return 0;
}

