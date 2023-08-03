#include<bits/stdc++.h>
using namespace std;
char a[300]; 
int s(char s[]){
	int cnt=0;
    for(int i=1;i<=255;i++){
        if(s[i]>='0'&&s[i]<='9'){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    gets(a);
    printf("%d",s(a));
    return 0;
} 
