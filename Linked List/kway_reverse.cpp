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
int getlength(Node* head){
      Node* temp=head;
      int len=0;
      while(temp!=NULL){
         len++;
        temp=temp->next;
       
        
      }
      return len;

};
Node* reversekWay(Node* head,int k){
    if (head==NULL){
        return head;
    }
    int l=getlength(head);
    
    if(l<k){
        cout<<"k is invalid"<<endl;
        return head;
    }
    else{
        //reverse k nodes
        Node* prev=NULL;
        Node* curr=head;
        Node* forward=curr->next;
        int count=0;
        while(count<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;


        }
        if (forward!=NULL){
            head->next=reversekWay(forward,k);
        }
        return prev;
    }

};
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
};
int main(){
    Node* head= new Node(10);
    Node* first= new Node(20);
    Node* second= new Node(30);
    Node* third= new Node(40);
    Node* fourth= new Node(50);
    Node* fifth= new Node(60);
    Node* sixth= new Node(70);

    
    head->next=first;
    first->next=second;
        second->next=third;    
        third->next=fourth;    
        fourth->next=fifth;    
        fifth->next=sixth;
        Node* st=reversekWay(head,3);
        print(st);
    
    return 0;
};