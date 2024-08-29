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
Node* reversell(Node* head){
Node* prev=NULL;
Node* curr=head;
Node* next=head->next;
while(next!=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}
return prev;
};


Node* solve(Node* &head1,Node* & head2){
    //reverse
     head1=reversell(head1);
     head2=reversell(head2);

     Node* ansHead=NULL;
     Node* ansTail=NULL;
     int carry=0;
    //add
    while(head1!=NULL && head2!=NULL ){
        int sum =carry+head1->data+head2->data;
        int digit= sum%10;
        carry=sum/10; 

        Node* newNode= new Node(digit);

        if(ansHead==NULL){
            ansHead=newNode;
            ansTail=newNode;
        }
        else{
            ansTail->next=newNode;
            ansTail=newNode;
        }
        head1=head1->next;
        
        head2=head2->next;

    }
    while(head1!=NULL){
          int sum =carry+head1->data;
        int digit= sum%10;
        carry=sum/10;
        Node* newNode= new Node(digit);
         ansTail->next=newNode;
         ansTail=newNode;

    }
      while(head2!=NULL){
          int sum =carry+head2->data;
        int digit= sum%10;
        carry=sum/10;
        Node* newNode= new Node(digit);
         ansTail->next=newNode;
         ansTail=newNode;

    }
    while (carry!=0){
        int sum =carry;
        int digit= sum%10;
        carry=sum/10;
        Node* newNode= new Node(digit);
         ansTail->next=newNode;
         ansTail=newNode;
        
    }
    Node* answer=reversell(ansHead);
    
    return answer;
};
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
};
int main(){
    Node* head1=new Node(2);
    Node* first=new Node(3);
    Node* second=new Node(4);
    head1->next=first;
    first->next=second;

    
    Node* head2=new Node(2);
    Node* first2=new Node(3);
    
    head2  ->next=first2;
    Node* s=solve(head1,head2);
    print(s);

    return 0;

}