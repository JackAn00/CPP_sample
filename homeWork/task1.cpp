#include<iostream>

using namespace std;

struct NodeTest{
	int number;

	NodeTest *next;
};


NodeTest *head=nullptr;

bool isFound(int e) {
	NodeTest *pGuard;
	pGuard=head;
	while(pGuard){
		if(pGuard->number==e){
			return true;
		}
		pGuard=pGuard->next;
	}

	return false;
}


NodeTest * creat(int testnum,int &count){
	NodeTest *p1,*p2;
	p1=new NodeTest;
	cin>>p1->number;
	head=p1;
	p2=p1;
	count=1;
	p2->next=nullptr;
	int temp=testnum-1;
	while(temp--) {
		int t;
		cin>>t;
		if (!isFound(t)) {
			p2->next=p1;
			p2=p1;
		    p1=new NodeTest;
			p1->number=t;
			count++;
		}
		
	}

	p2->next=nullptr;

	return head;
}



void showList(NodeTest *head) {
	while(head) {
		cout<<head->number<<" ";
		head=head->next;
	}
}

int main() {
	int testNum;
	cin>>testNum;
	while(testNum--){
		int numOfNode;  
		cin>>numOfNode;
		int count=0;
		creat(numOfNode,count);
		cout<<count<<" ";
		showList(head);
	}

	return 0;
}
