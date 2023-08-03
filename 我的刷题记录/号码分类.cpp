#include<bits/stdc++.h>
using namespace std;
int n,x[10001],a;
int main()
{
	cin>>n;
	for(a=1;a<=n;a++)
	{
		scanf("%d",&x[a]);
	}
	cout<<"A: ";
	for(a=1;a<=n;a++)
	{
		if(x[a]/10000000==8){
			cout<<x[a]<<" ";
		}
	}
	cout<<endl<<"B: ";
	for(a=1;a<=n;a++)
	{
		if(x[a]/10000000==5){
			cout<<x[a]<<" ";
		}
	}
	cout<<endl<<"C: ";
	for(a=1;a<=n;a++)
	{
		if(x[a]/10000000==2){
			cout<<x[a]<<" ";
		}
	}
	return 0;
}
