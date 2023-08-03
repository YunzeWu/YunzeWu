#include<bits/stdc++.h>
using namespace std;
struct dui{
    int head;
    int a[1005];
    void pop(){
        a[--head]=0;
        return;
    }
    void push(int &x){
        a[head++]=x;
         
        return;
    }
    int top(){
        return a[head-1];
    }
    bool empty(){
        if(head==0) return 1;
        else return 0;
    }
};
int x;
char c[5];
dui q;
int main(){
    while(scanf("%s",c)!=EOF){
        if(c[0]=='I'){
            scanf("%d",&x);
            q.push(x);
        }
        if(c[0]=='O'){
            if(q.empty()) printf("ERROR\n");
            else{
                printf("%d\n",q.top());
                q.pop();
            }
        }
    }
    return 0;
}
