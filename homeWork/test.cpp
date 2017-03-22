#include<iostream>
#include<string>
using namespace std;

struct Task{
	int id;
	string task1;
	string task2;
	string task3;
};
int isCopy(Task *,Task *);
int main(){
	int testNum;
	Task *info=new Task[testNum];
	for(int i=0;i<testNum;i++){
		cin>>info[i].id>>info[i].task1>>info[i].task2>>info[i].task3;
	}
	Task *lpt,*rpt;



	return 0;
}

int isCopy(Task *lhs,Task *rhs){
	
	int count=0;
	int len1=lhs.;
	for(int )

}
