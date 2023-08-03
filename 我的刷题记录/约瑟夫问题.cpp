#include<bits/stdc++.h>
using namespace std;
int a[100005],now,sum;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    now=0,sum=0;
    for(int i=1;i<=n;i++){
        a[i]=1;
    }
    for(int i=1;i<=n;i++){
        int lim=(m-1)%n+1;
        while(sum<lim){
            now++;
            if(now==n+1){
                now=1;
            }
            sum+=a[now];
        }
        sum=0;
        a[now]=0;
        printf("%d\n",now);
    }
     
}

