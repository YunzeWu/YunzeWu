#include<bits/stdc++.h>
using namespace std;
char s1[205];
char s2[205];
int main(){
    int ans=0;
    int cnt1=0,cnt2=0;
    gets(s1);
    gets(s2);
    cnt1=strlen(s1);
    cnt2=strlen(s2);
    if(cnt1>cnt2){
        for(int i=0;i<cnt1;i++){
            for(int j=0;j<cnt2;j++){
                if(s2[j]==s1[j+i]){
                    ans=1;
                }else{
                    ans=0;
                    break;
                }
            }
            if(ans==1){
                break;
            }
        }
        if(ans==1){
            printf("%s is substring of %s",s2,s1);
        }else{
            printf("No substring");
        }
    }
    if(cnt2>=cnt1){
        for(int i=0;i<cnt2;i++){
            for(int j=0;j<cnt1;j++){
                if(s1[j]==s2[j+i]){
                    ans=1;
                }else{
                    ans=0;
                    break;
                }
            }
            if(ans==1){
                break;
            }
        }
        if(ans==1){
            printf("%s is substring of %s",s1,s2);
        }else{
            printf("No substring");
        }
    }
    return 0;
}

