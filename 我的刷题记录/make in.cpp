#include<bits/stdc++.h>
using namespace std;
int a[5000005];
int main(){
    freopen("number10.in","w",stdout);
    srand(time(NULL));
    int n=rand()*rand()%100000+1,p=abs(rand());
    for(int i=0;i<n;i++){
        a[i]=abs(rand());
    }
    printf("%d %d\n",n,p);
    for(int i=0;i<n;i++){
        if(i==n-1){
            printf("%d",a[i]);
        }
        if(i!=n-1){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
