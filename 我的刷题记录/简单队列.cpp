#include<bits/stdc++.h>
using namespace std;
int que[1005];

int main(){
	int head=1;tail=0;
	char tmp[10];
	while(scanf("%s",tmp) != EOF){
		if(tmp[0]=='I'){
			int x;
			scanf("%d",&x);
			que[++tail]=x;
		}else{
			if(head<=tail){
				printf("%d\n",que[head]);
				head++;
			}else{
				printf("ERROR\n");
			}
		}
	}
	return 0;
}

