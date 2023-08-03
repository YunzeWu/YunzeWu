#include<bits/stdc++.h>
using namespace std;
char name[15][20];
char fa[20];
char shou[20];
int gift[10]; 

int main(){
	int np,money,num,each;
	scanf("%d",&np);
	for(int i=0;i<np;i++){
		scanf("%s",name[i]);
	}
	for(int i=0;i<np;i++){
		scanf("%s",fa);
		scanf("%d%d",&money,&num);
		if(num==0){
			continue;
		}
		each=money/num;
		for(int j=0;j<num;j++){
			scanf("%s",shou);
			for(int k=0;k<np;k++){
				if(strcmp(shou,name[k])==0){
					gift[k]+=each;
					break;
				}
			}
		}
		for(int k=0;k<np;k++){
			if(strcmp(fa,name[k])==0){
				gift[k]-=each*num;
				break;
			}
		}
	}
	for(int i=0;i<np;i++){
		printf("%s %d\n",name[i],gift[i]);
	}
	return 0;
}

