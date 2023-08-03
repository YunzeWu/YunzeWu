#include<bits/stdc++.h>
using namespace std;
char a[105];
char c[105];
int b[105];
int d[105];
int xiangjia[200];
int quling[200];
int main(){
    scanf("%s",a);
    scanf("%s",c);
    for(int i=0;i<strlen(a);i++){
        b[i]=a[i]-'0';
    }
    for(int i=0;i<strlen(c);i++){
        d[i]=c[i]-'0';
    }
    int tmp;
    for(int i=0,j=strlen(a)-1;i<j;i++,j--){
        tmp=b[i];
        b[i]=b[j];
        b[j]=tmp;
    }
    int tmp2;
    for(int i=0,j=strlen(c)-1;i<j;i++,j--){
        tmp2=d[i];
        d[i]=d[j];
        d[j]=tmp2;
    }
    int max;
    int lena=strlen(a);
    int lenb=strlen(c);
    if(lena>lenb){
        max=lena;
    }else{
        max=lenb;
    }
    for(int i=0;i<=max;i++){
        xiangjia[i]=b[i]+d[i];
    }
    for(int i=0;i<max;i++){
        if(xiangjia[i]>=10){
            xiangjia[i+1]+=1;
            xiangjia[i]=xiangjia[i]%10;
        }
    }
    int maxlen;
    for(maxlen=199;maxlen>1;maxlen--){
        if(xiangjia[maxlen-1]>0){
            break;
        }
    }
    for(int i=maxlen-1;i>=0;i--){
        printf("%d",xiangjia[i]);
    }
    return 0;
}
