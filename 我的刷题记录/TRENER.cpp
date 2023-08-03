#include<bits/stdc++.h>
using namespace std;
char a[205][250];
char c[250];
int d[250];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        gets(a[i]);
    }
    int cnt=0,k=0;
    int cnt1=0;
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[j][0]==a[i][0]){
                cnt++;
            }
        }
        if(cnt>=5){
			c[k]=a[i][0];
            k++;
        }else{
        	cnt1++;
		}
		if(cnt1==n){
			printf("PREDAJA");
			return 0;
		}
a:      cnt=0;
 		continue;
    }
    for(int i=0;i<strlen(c);i++){
    	for(int j=i+1;j<strlen(c);j++){
    		if(c[i]==c[j]){
    			c[j]='/';
			}
		}
	}
    int t;
    for(int i=0;i<strlen(c);i++){
        d[i]=c[i]-'a';
    }
    for(int i=0;i<strlen(c);i++){
        if(d[i]>d[i+1]){
            t=d[i+1];
            d[i]=d[i+1];
            d[i+1]=t;
        }
    }
    for(int i=0;i<strlen(c);i++){
    	if(c[i]=='/'){
			continue;
		}
        printf("%c",c[i]);
    }
    return 0;
}
