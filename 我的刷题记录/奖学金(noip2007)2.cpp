#include<bits/stdc++.h>
using namespace std;
struct student{
	int chi;
	int maths;
	int eng;
	int ID;
	int tot;
}stu[305]; 
bool cmp(student a1,student a2){
	if(a1.tot>a2.tot){
		return true;
	}else if(a1.tot==a2.tot && a1.chi>a2.chi){
		return true;
	}else if(a1.tot==a2.tot && a1.chi==a2.chi && a1.ID<a2.ID){
		return true;
	}else{
		return false;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&stu[i].chi,&stu[i].maths,&stu[i].eng);\
		stu[i].ID=i+1;
		stu[i].tot=stu[i].chi+stu[i].eng+stu[i].maths;
	}
	sort(stu,stu+n,cmp);
	for(int i=0;i<5;i++){
		printf("%d %d\n",stu[i].ID,stu[i].tot);
	}
	return 0;
}

