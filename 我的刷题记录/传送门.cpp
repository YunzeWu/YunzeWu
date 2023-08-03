#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    int _1,_2,_3;
    _1=abs(x-a)+abs(y-b);
    _2=abs(y-a)+abs(x-b);
    _3=abs(a-b);
    int min=_1;
    if(min>_2)
    	min=_2;
    if(min>_3)
    	min=_3;
    printf("%d",min);
    return 0;	
}
