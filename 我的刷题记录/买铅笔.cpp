#include<bits/stdc++.h>
using namespace std;
int num[5],package_price[5],price[5];
int main(){
	int n,package_num;
	scanf("%d",&n);
	for(int i=0;i<3;i++){
		scanf("%d%d",&num[i],&package_price[i]);//输入 
	}
	for(int i=0;i<3;i++){//求出3种包装的价钱 
		if(n%num[i]!=0){
			package_num=n/num[i]+1;
		}else{
			package_num=n/num[i];
		}
		price[i]=package_num*package_price[i];
		package_num=0;
	}
	cout<<price[0]<<endl;
	cout<<price[1]<<endl;
	cout<<price[2]<<endl;
	int ans=price[0];
	for(int i=1;i<3;i++){//求最小值 
		if(price[i]<ans){
			ans=price[i];
		}
	}
	printf("%d",ans);//输出 
	return 0;
}
