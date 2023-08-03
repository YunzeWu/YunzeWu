#include<bits/stdc++.h>
using namespace std;
struct a{
	int id;
	int age;
	int time;
}a1[35000];
bool rule(a s1,a s2){
	if(s1.age<=6 && s2.age<=6 && s1.age==s2.age){//小小 = 
		return s1.time>s2.time;
	}
	if(s1.age<=6 && s2.age<=6 && s1.age!=s2.age){//小小!= 
		return s1.age>s2.age;
	}
	if(s1.age<=6 && s2.age>6 && s2.age<60){//小中 
		return false;
	}
	if(s1.age<=6 && s2.age>=60){//小大 
		return false;
	}
	if(s1.age>6 && s1.age<60 && s2.age<=6){//中小 
		return true;
	}
	if(s1.age>6 && s1.age<60 && s2.age>6 && s2.age<60){//中中 
		return s1.time>s2.time;
	}
	if(s1.age>6 && s1.age<60 && s2.age>=60){//中大 
		return true;
	}
	if(s1.age>=60 && s2.age<=6){//大小 
		return true;
	}
	if(s1.age>=60 && s2.age>6 && s2.age<60){//大中
		return false;
	}
	if(s1.age>=60 && s2.age>=60 && s1.age==s2.age){//大大 = 
		return s1.time>s2.time;
	}
	if(s1.age>=60 && s2.age>=60 && s1.age!=s2.age){//大大!= 
		return s1.age<s2.age;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&a1[i].id,&a1[i].age);
		a1[i].time=i;
//		printf("%d\n",a1[i].time);
	}
	sort(a1,a1+n,rule);
	for(int i=0;i<n;i++){
		printf("%d\n",a1[i].id);
	}
	return 0;
}
