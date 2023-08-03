#include<bits/stdc++.h>
using namespace std;
deque<int> que;

int main(){
	char tmp[10];
	while(scanf("%s",tmp) != EOF){
		if(tmp[0]=='I'){
			int x;
			scanf("%d",&x);
			que.push_back(x);
		}else{
			if(!que.empty){
				printf("%d\n",que[head]);
				que.pop_front();
			}else{
				printf("ERROR\n");
			}
		}
	}
	return 0;
}

