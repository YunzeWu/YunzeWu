#include<bits/stdc++.h>
using namespace std;
char tmp[300];
stack<char> st;
int main(){
    cin>>tmp;
    st.push(tmp[0]);
    for(int i=1;tmp[i];i++){
        if(st.size()>=1){
            if((st.top()=='('&&tmp[i]==')')||(st.top()=='['&&tmp[i]==']')){
            	st.pop();
			}else{
				st.push(tmp[i]);
			}
        }
        else st.push(tmp[i]);
    }
    if(st.empty()) printf("OK");
    else printf("Wrong");
    return 0;
}
