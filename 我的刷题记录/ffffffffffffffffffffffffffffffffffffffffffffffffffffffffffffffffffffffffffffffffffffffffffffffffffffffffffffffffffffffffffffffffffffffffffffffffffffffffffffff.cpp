#include<iostream>
using namespace std;
void huan(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;return;
}
int main(){
    int m,n;
    cin>>m>>n;
    huan(&m,&n);
    cout<<m<<" "<<n<<endl;
    return 0;
}

