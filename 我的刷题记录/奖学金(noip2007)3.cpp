#include<bits/stdc++.h>
using namespace std;
struct student{
	int Id;
	int chinese;
	int maths;
	int english;
	int tot;
}stu[305];
struct rule{
	bool operator()(const student & s1,const student & s2){
		if(s1.tot>s2.tot){
			return true;
		}else if(s1.tot==s2.tot&&s1.chinese>s2.chinese){
			return true;
		}else if(s1.tot==s2.tot&&s1.chinese==s2.chinese&&s1.Id<s2.Id){
			return true;
		}else{
			return false;
		}
	}
};
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&stu[i].chinese,&stu[i].maths,&stu[i].english);
		stu[i].Id=i+1;
		stu[i].tot=stu[i].chinese+stu[i].english+stu[i].maths;
	}
	sort(stu,stu+n,rule());
	for(int i=0;i<5;i++){
		printf("%d %d\n",stu[i].Id,stu[i].tot);
	}
	return 0;
}

