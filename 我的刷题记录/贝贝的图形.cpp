#include<bits/stdc++.h>
using namespace std;
char a[300];
int b[26];
char c[300][26];
int max2[300];
int main(){
    gets(a);
    // 
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='A'&&a[i]<='Z'){
            b[a[i]-'A']++;
        }
    }
    // 
    int maxx=-999;
    for(int i=0;i<26;i++){
    	if(b[i]>maxx){
    		maxx=b[i];
		} 
	}
	// 
    for(int i=0;i<maxx;i++){
    	for(int j=0;j<26;j++){
    		if(b[j]>0){
    			c[i][j]='*';
    			b[j]--;
			}else{
				c[i][j]=' ';
			}
		}
	}
	// 
	for(int i=0;i<maxx;i++){
		for(int j=0;j<26;j++){
			if(c[i][j]=='*'){
				max2[i]=j;
			}
		}
	}
	// 
    for(char i='A';i<'Z';i++){
    	printf("%c ",i);
	}
	printf("Z");
    if(maxx==0){
    	return 0;
	}else{
		printf("\n");
	}
    for(int i=0;i<maxx;i++){
        for(int k=0;k<=max2[i];k++){
            if(k!=max2[i]){
                printf("%c ",c[i][k]);
            }
            if(k==max2[i]){
                printf("%c",c[i][k]);
            }
        }
        if(i!=maxx-1){
        	printf("\n");
		}
    }
    return 0;
    
}
