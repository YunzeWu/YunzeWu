#include<iostream>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            for(int k=0;k<=j;k++)
            {
                if(i+j+k==n) cnt++;
            }
        }
    }
    cout<<cnt;
}
