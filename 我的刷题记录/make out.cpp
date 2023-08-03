#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
    freopen("number10.in","r",stdin);
    freopen("number10.out","w",stdout);
    int n,p;
    scanf("%d%d",&n,&p);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=1+1;j<n;j++){
            if(a[i]+a[j]==p){
                ans++;
            }
        }
    }
    printf("%d",ans);
    return 0;
}

