#include<bits/stdc++.h>
using namespace std;
char s1[10000];
char s2[10000];
int cmp(char t1[],char t2[]){
	int ans=0;
	for(int i=0;t1[i]!='\0'||t2[i]!='\0';i++){
		if(t1[i]==t2[i]){
			continue;
		}else{
			ans=t1[i]-t2[i];
			break;
		}
	}
	return ans;
}
int main(){
	gets(s1);
	gets(s2);
	printf("%d",cmp(s1,s2));
	return 0;
}

