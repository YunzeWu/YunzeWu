#include<bits/stdc++.h>
using namespace std;
struct stu{
	int ID;
	int chi;
	int mat;
	int eng;
	int tot;
}a[305];

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&a[i].chi,&a[i].mat,&a[i].eng);
		a[i].tot=a[i].chi+a[i].mat+a[i].eng;
		a[i].ID=i+1;
	}
	for(int p=n-2;p>=0;p--){
		for(int i=0;i<=p;i++){
			if(a[i].tot<a[i+1].tot
			||(a[i].tot==a[i+1].tot&&a[i].chi<a[i+1].chi)
			||(a[i].tot==a[i+1].tot&&a[i].chi==a[i+1].chi&&a[i].ID>a[i+1].ID)){
				swap(a[i],a[i+1]);
			}
		}
	}
	for(int i=0;i<6-1;i++){
		printf("%d %d\n",a[i].ID,a[i].tot);
	}
	return 0;
}

