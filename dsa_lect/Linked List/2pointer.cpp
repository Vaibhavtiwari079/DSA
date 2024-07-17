#include<bits/stdc++.h>
using namespace std;
class Node{  public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
Node* getmiddleNode(Node* head){

    if (head==NULL){
      cout<<"ll is empty"<<endl;
      return head;
    }
    if (head->next==NULL){
      cout<<"ll has one element"<<endl;
      return head;
    }
    Node* slow=head;
        Node* fast=head;
        //for middle in even
        //Node* fast=head->next;
     while(fast!=NULL)
     {fast=fast->next;
      if (fast!=NULL)
      {
        fast=fast->next;
         slow=slow->next;
      }
    
  }
  return slow;

}
int main(){
    Node* head=new Node(10);
    Node* head2=new Node(20);
    Node* head3=new Node(30);
    Node* head4=new Node(40);
    Node* head5=new Node(50);
    head->next=head2;
    head2->next=head3;
    head3->next=head4;
    head4->next=head5;
    Node* st=getmiddleNode(head);
    cout<<st->data<<endl;

    return 0;
}