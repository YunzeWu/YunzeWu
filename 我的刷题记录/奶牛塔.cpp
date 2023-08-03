#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,h,b,a[2001],ans=0,c=0;
	scanf("%d%d",&n,&h);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	for(int i=n;i>=0;--i){
		ans=ans+a[i];
		c++;
		if(ans>=h)
		{
			printf("%d",c);
			return 0;
		}
	}
	return 0;
}
