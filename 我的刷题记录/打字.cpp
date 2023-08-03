#include<bits/stdc++.h>
using namespace std;
char abc[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main(){
	char t;
s:	for(int i=0;i<26;i++){
		printf("%c",abc[i]);
		getchar();
		scanf("%c",t);
		if(t!=abc[i]){
			printf("你打错了，重新开始！"); 
			goto s; 
		}
	}
	printf("恭喜完成！");
	return 0;
}

