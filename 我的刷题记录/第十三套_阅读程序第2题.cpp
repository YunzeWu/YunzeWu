#include<bits/stdc++.h>
using namespace std;
const int N=1100;
int n,k,m;
int a[N];
int vis[N];
int main(){
	cin>>n>>k>>m;
	int cnt=0;
	int num=0;
	while(cnt<n-1){
		int cnt2=1;
		while(cnt2<=n){
			int pos=k+cnt2;
			if(pos>n){
				pos=pos-n;
			}
			if(!vis[pos]){
				num++;
				if(num%m==0){
					cnt++;
					vis[pos]=1;
					if(cnt==n-1){
						break;
					}
				}
			}
			cnt2++;
		}
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}

