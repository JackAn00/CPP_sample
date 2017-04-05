#include<iostream>

using namespace std;

struct NodeTest{
	int number;

	NodeTest *next;

};

NodeTest *head;

NodeTest * creat(int testNum){
	// 11 ， 22 
	NodeTest *p1,*p2;
	p1=new NodeTest;
	cin>>p1->number;
	head=NULL;
	p2=p1;// 11(p2)
	int temp=testNum-1;
	head=p1;
	while(temp--){// 1
			p2->next=p1;
			p2=p1;
			p1=new NodeTest;
			cin>>p1->number;// 22（p1）
			
	
	}
	// 11 -> 22
	p2->next=NULL;

	//delete p1;// 22 

	return head;

}

void deleteNode(int location){


}

void showList(NodeTest * head){

	//NodeTest *pGuard=head;

	while( head ){
		cout<<head->number<<" ";
		head=head->next;
	}

}

int main(){

	int testNum;
	cin>>testNum;
	
	showList(creat(testNum));

	return 0;
}
