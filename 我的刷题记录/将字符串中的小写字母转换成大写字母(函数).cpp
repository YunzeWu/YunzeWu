#include<bits/stdc++.h>
using namespace std;
char a[105]; 
int d(char *s){
	for(int i=0;i<=100;i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-=32;
        }
    }
    return *s;
} 
int main(){
    gets(a);
    printf("%s",d(a));
    return 0;
}

