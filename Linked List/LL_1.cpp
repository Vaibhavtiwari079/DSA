#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(){
        int data=-1;
        this->next=NULL;
    }
    
    Node(int data){
        this->data=data;
        this->next =NULL;
    }
};
void print(Node* head){
       Node* i= head;
       while
     (i!=NULL){
        cout<<i->data<<" "<<endl;
        i=i->next;

     }
};
 void inserathead(Node* &head,int data){  
    Node* newNode= new Node(data);
    if (head==NULL){
        head=newNode;
    }
    else{
    newNode->next=head;
    head=newNode;
    }

    

 };

 void insertatTail(Node* &head,int data)
{
     Node* NewNode= new Node(data);
    Node* temp= head; 
    Node* ptr;
    if (head==NULL){
        head==NewNode;
    }
    else{
    while(temp!=NULL){
        ptr=temp;
        temp=temp->next;
    }
     ptr->next=NewNode; 
    }

}
 ;
 void insertatPosition(Node* head,int position, int data)
{   int i=0;
    Node* temp=head;
    Node* ptr;
    Node* newNode = new Node(data);
    while(i<position-1)
    {
        temp=temp->next;
          i++;
    }
    ptr=temp->next;
    temp->next=newNode;
    newNode->next=ptr;

};

int main(){
    
    Node* first=new Node(5);

    Node* second=new Node(4);
    Node* Third=new Node(3);

    first->next=second;
    second->next= Third;
    Node* head=first;
    inserathead(head,40); 
    insertatTail(head,10);
    insertatPosition(head,2,22);
      print(head);


     
  
    return 0;
}