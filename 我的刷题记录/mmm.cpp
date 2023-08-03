#include<bits/stdc++.h>
using namespace std;
long long a[100010],b[100010],ans;
void mmm(int L,int R){
	if(L==R) return;
	int mid=(L+R)>>1;
	mmm(L,mid);
	mmm(mid+1,R);
	int i=L,j=mid+1,k=L;
	while(i<=mid && j<=R){
		if(a[i]>a[j]){
			ans+=j-k;
			b[k++]=a[j++];
		}
		else
			b[k++]=a[i++];
	}
	while(i<=mid) b[k++]=a[i++];
	while(j<=R) b[k++]=a[j++];
	for(i=L;i<=R;i++) a[i]=b[i];
}
int main(){
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	mmm(1,n);
	
	cout<<ans;
	return 0;
}

