#include<bits/stdc++.h>
using namespace std;
int a[1000][1000],n,m,d,b,c;int maxn=-1;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++) a[i][j]=999999;
     
    for(int i=1;i<=n;i++) a[i][i]=0;
     
    for(int i=1;i<=m;i++){
        cin>>d>>b>>c;
        a[d][b]=c;
        a[b][d]=c;
    }
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                if(a[i][j]>a[i][k]+a[k][j])
                {
                    a[i][j]=a[i][k]+a[k][j];
                }
         
            }
    for(int i=1;i<=n;i++){
        if(maxn<a[1][i])
        maxn=a[1][i];
    }
    cout<<maxn;
    return 0;
}
