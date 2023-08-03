#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	char a;
	scanf("%d%c%d",&n,&a,&m);
	int x,d=10,b=1,j;
	while(d>0)
	{
		x=n/(10*b);
		j=n%(10*b);
		if(j*x==m)
		{
			printf("%d*%d=%d",x,j,m);
			return 0;
		}
		b*=10;
		d--;
	}
	printf("Impossuble");
	return 0;
}

