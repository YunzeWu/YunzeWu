#include<bits/stdc++.h>
using namespace std;
int select_arr(int arr[],int len,int arr_value){
	while(1){
		int left=0;
		int right=len-1;
		while(left<=right){
			int mid=(left+right)/2;
			int mid_value=arr[mid];
			if(mid_value=arr_value){
				return mid;
			}
			else if(mid_value>arr_value){
				right=mid-1;
			}
			else if(mid_value<arr_value){
				left=mid+1;
			}
		}
		return -1;
	}
}
int main(){
	int arr[10]={1,3,5,7,9,10,16,46,88,91};
	int weizhi=select_arr(arr,10,16);
	cout<<weizhi;
	return 0;
}

