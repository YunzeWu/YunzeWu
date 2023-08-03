#include<bits/stdc++.h>
using namespace std;
char s1[205];//³¤ 
char s2[205];//¶Ì
int Strstr(char t1[],char t2[]){
	if(t2[0]==0){
		return 0;
	}
	for(int i=0;t1[i];i++){
		int j;
		for(j=0;t2[j];j++){
			if(t2[j]!=t1[i+j]){
				break;
			}
		}
		if(t2[j]==0){
			return i;
		}
	}
	return -1;
}
int main(){
	gets(s1);
	gets(s2);
	printf("%d\n",Strstr(s1,s2));
	return 0;
}

