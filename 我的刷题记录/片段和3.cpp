#include<bits/stdc++.h>
using namespace std;
long long sum[100005];
int main(){
    int n,m,tmp;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&tmp);
        sum[i]=sum[i-1]+tmp;
    }
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        scanf("%d",&tmp);
        printf("%lld\n",sum[tmp]);
    }
    return 0;
}
