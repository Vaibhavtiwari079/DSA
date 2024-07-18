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

void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

Node* reversell(Node* head)
{
Node* prev=NULL;
Node* curr=head;
Node* next=head->next;
while(curr!=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}
return prev;
};


bool checkpallindrome(Node* &head){  
    if (head==NULL){
        cout<<"ll iz empty"<<endl;    
        return true;
    }
    else if(head->next==NULL){

        return true;
    }
    else{
    Node* slow=head;
    Node* fast=head->next ;
    
//middle find kar rhe
    while(fast!=NULL){
       fast= fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;

        } 
      
    
    }
    
    //middle slow me mil gya hai
      
    //reverse karenge ll
    Node* reverseLLhead=reversell(slow->next);
    cout<<reverseLLhead<<endl;

    //start comparisson
    Node* temp1=head;
    Node* temp2= reverseLLhead;
    while(temp2!=NULL){
        if(temp2->data!=temp1->data){
            return false;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;
    }

};
int main(){
    Node* head= new Node(10);
    Node* first= new Node(20);
    Node* second= new Node(30);
    Node* third= new Node(40);
    Node* fourth= new Node(30);
    Node* fifth= new Node(20);
    Node* sixth= new Node(10);
    

    
    head->next=first; 
    first->next=second;   
    second->next=third;  
    third->next=fourth;    
    fourth->next=fifth;
    fifth->next=sixth;

    bool ab= checkpallindrome(head);
     
    
    if (ab){
        cout<<"it  is pallindrome"<<endl;
    }
    else{
        cout<<"not a pallindreome"<<endl; 
    }
    return 0;
}