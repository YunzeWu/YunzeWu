#include<bits/stdc++.h>
using namespace std;
char a[250][100];
int b[26];

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		gets(a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%c",a[i][0]);
		printf("\n");
	}
	for(int i=0;i<n;i++){
		b[a[i][0]-'a']++;
	}

	bool f=0;
	for(int i=0;i<26;i++){
//		printf("%c:%d	",i+'a',b[i]);
		if(b[i]>=5){
			printf("%c",i+'a');
			f=1;
		}
	}
	if(f==0){
		printf("PREDAJA");
	}
	return 0;
}

