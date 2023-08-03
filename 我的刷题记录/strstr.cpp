#include<bits/stdc++.h>
using namespace std;
char s1[10005],s2[10005],tmp[10005];
int len,len2,ans;

int main(){
	gets(s1);
	gets(s2);
	len=strlen(s1);
	len2=strlen(s2);
	for(int i=0;i<len-len2+1;i++){
		for(int j=i;j<len2+i;j++){
			tmp[j-i]=s1[j];
		}
		if(strcmp(tmp,s2)==0){
			printf("%d",i);
			ans=1;
			return 0;
		}else{
			ans=0;
		}
	}
	if(ans==0){
		printf("-1");
	}
	if(s2==0){
		printf("0");
	}
	return 0;
}
