#include<bits/stdc++.h>
using namespace std;
char str1[30];
char str2[30]; 
void str(){
	int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",str1);
        scanf("%s",str2);
        if(str1[0]==str2[0]){
            printf("Tie\n");
        }else{
            if(str1[0]=='R'&&str2[0]=='S'||str1[0]=='S'&&str2[0]=='P'||str1[0]=='P'&&str2[0]=='R'){
                printf("Player1\n");
            }else{
                printf("Player2\n");
            }
        }
    }
} 
int main()
{
    str();
    return 0;
}
