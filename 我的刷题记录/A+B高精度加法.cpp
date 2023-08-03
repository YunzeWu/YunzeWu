#include<bits/stdc++.h>
using namespace std;
char a[105];
char b[105];
int c[105];
int d[105];
int xiangjia[200];

int main(){
	scanf("%s",a);
	scanf("%s",b);
	
	int lena=strlen(a),lenb=strlen(b);
	for(int i=0;i<lena;i++){
		c[lena-i-1]=a[i]-'0';
	}
	for(int i=0;i<lenb;i++){
		d[lenb-i-1]=b[i]-'0';
	}
	
	int maxlen;
	if(lena>lenb){
		maxlen=lena;
	}else{
		maxlen=lenb;
	}
	for(int i=0;i<maxlen;i++){
		xiangjia[i]+=(c[i]+d[i]);
		if(xiangjia[i]>=10){
			xiangjia[i+1]+=1;
			xiangjia[i]=xiangjia[i]%10;
		}
	}
	
	int o;
	for(o=199;o>=0;o--){
		if(xiangjia[o]>0){
			break;
		}
	}
	
	for(int i=o;i>=0;i--){
		printf("%d",xiangjia[i]);
	}
	return 0;
}
