#include<stdio.h>
using namespace std;

int main()
{
	int u;
	int v;
	int w;
	int temp;
	printf("input u,v: ");
	scanf("%d,%d",&u,&v);
	
	if (u<v)
	{	
		w=v;
		v=u;
		u=w;
	}


	while(v!=0)
	{
		temp=u%v;
		u=v;
		v=temp;
	}
	
	printf("answer is %d",u);
	return 0;
}
