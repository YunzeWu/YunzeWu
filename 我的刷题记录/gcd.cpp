#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
	int u;
	int v;
	int temp;
	printf("u,v?");
	scanf("%d,%d",&u,&v);
	while(v!=0)
	{
		temp=u%v;
		u=v;
		v=temp;
	}
	printf("%d",u);
	return 0;	
 } 
