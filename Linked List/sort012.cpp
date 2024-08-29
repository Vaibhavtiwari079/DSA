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
/*Node* sort0(Node* &head){
    Node* temp=head;
    Node* zerohead;
    Node* onehead;
    Node* twohead;
    
    while(temp!=NULL){
        if (temp->data==0){
            zerohead->data=0;
            zerohead=zerohead->next;
        }
        if (temp->data==1){
            onehead->data=1;
            onehead=onehead->next;
        }
        if (temp->data==2){
            twohead->data=2;
            twohead=twohead->next;
        }
       temp=temp->next;
    }
    head=zerohead;
    zerohead->next=onehead;
    onehead->next=twohead;
 return head;
};*/
Node* sort2(Node* &head){
    Node* zerohead=new Node(-1);
    Node* zeroTail=zerohead;

    
    Node* onehead=new Node(-1);
    Node* oneTail=onehead;

    
    Node* twohead=new Node(-1);
    Node* twoTail=twohead;

    Node* curr=head;
    while(curr!=NULL){
        if (curr->data==0){
        Node* temp=curr; 
        curr=curr->next;
        temp->next=NULL;

        zeroTail->next=temp;
        zeroTail=temp;
    }
    
        else if (curr->data==1){
        Node* temp=curr;
        curr=curr->next;
        temp->next=NULL;

        oneTail->next=temp;
        oneTail=temp;
    }
    
        else if (curr->data==2){
        Node* temp=curr;
        curr=curr->next;
        temp->next=NULL;

        twoTail->next=temp;
        twoTail=temp;
    }
    }
    Node* temp=onehead;
    onehead=onehead->next;
    temp->next=NULL;
    delete temp;
    
    
     temp=twohead;
    twohead=twohead->next;
    temp->next=NULL;
    delete temp;

    //join list
    if(onehead!=NULL){
        zeroTail->next=onehead;
        if(twohead!=NULL){
            oneTail->next=twohead;

        }else{
            if(twohead!=NULL)
             zeroTail=twohead;
        }
    }
    
     temp=zerohead;
    zerohead=zerohead->next;
    temp->next=NULL;
    delete temp;


return zerohead;
}

void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    Node* head= new Node(1);
    Node* first= new Node(0);
    Node* second= new Node(0);
    Node* third= new Node(2);
    Node* fourth= new Node(2);
    Node* fifth= new Node(1);
    Node* sixth= new Node(1);

    
    head->next=first;
    first->next=second;
    second->next=third;    
    third->next=fourth;    
    fourth->next=fifth;    
    fifth->next=sixth;
 
 Node* st=sort2(head);
 print(st);
 
 return 0;
}