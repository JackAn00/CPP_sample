#include<iostream>

using namespace std;

struct NodeTest{

   int data;
   NodeTest *next;

};
/**
*让头节点保存节点的个数；
*/
NodeTest *creat(NodeTest *head,int testNum){
  NodeTest *pS,*pE;
  head=new NodeTest;
  head->data=0;
  pE=head;
  for(int i=0;i<testNum;i++){
    pS=new NodeTest;
    cin>>pS->data;
    pE->next=pS;
    pE=pS;
    head->data++;
  }
    pS->next=NULL;
    return head;
}

NodeTest* deleteNode(NodeTest *head,int i){
  NodeTest *p,*q;
  if(i>0&&head->data>0){
    p=head;
    for(int t=0;t<i-1;t++){
        p=p->next;
    }
    q=p->next;
    p->next=q->next;
    head->data--;   //每成功删除一个节点，头节点保存的个数-1
    return head;
  }
  return NULL;
}

void showList(NodeTest *head){

	cout<<head->data;
	NodeTest *pGuard=head->next;
    while(pGuard){
        cout<<" "<<pGuard->data;
       pGuard=pGuard->next;
    }
  cout<<endl;
}


int main(){
  int testNum;
  NodeTest *head=NULL;
  cin>>testNum;
  head=creat(head,testNum);
  showList(head);
  int numOfDelete;
  cin>>numOfDelete;
  int *del=new int[numOfDelete];
  for(int i=0;i<numOfDelete;i++){
    cin>>del[i];
    if(deleteNode(head,del[i])){
      showList(head);
    } else {
      cout<<"error"<<endl;
    }
  }
  return 0;
}
