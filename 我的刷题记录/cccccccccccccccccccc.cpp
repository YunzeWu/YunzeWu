#include<bits/stdc++.h>
using namespace std;
char s1[55];
char t[55];

int main(){
	gets(s1);
	for(int i=0;s1[i];i++){
		if(s1[i]>='A'&&s1[i]<='Z'){
			s1[i]+=32;
			continue;
		}
		if(s1[i]>='a'&&s1[i]<='z'){
			s1[i]-=32;
		    continue;
		}
		
	}

	for(int j=0,i=strlen(s1)-1;i>=0;i--,j++){
		t[j]=s1[i];
	}
	for(int j=0;t[j];j++){
		if(t[j]=='x') 
		t[j]+=3;
	}
	puts(t);
	return 0;
}

