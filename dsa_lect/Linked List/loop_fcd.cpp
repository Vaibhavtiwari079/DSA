#include<bits/stdc++.h>
using namespace std;
class Node{ 
     public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

}; 
bool loopdetect(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while (fast!=NULL){
        fast->next=head->next;
        if (fast!=NULL){
            fast=fast->next;
            slow=slow->next
            ;
            
        }
        if (slow==fast){
            return true;
        }
    }
    return false;

};

Node* loopatPos(Node* & head){
     Node* slow=head;
    Node* fast=head;
    int count=0;
    while (fast!=NULL){
        fast->next=head->next;
        if (fast!=NULL){
            fast=fast->next;
            slow=slow->next
            ;
            
        }
        if (slow==fast ){
            
            
            if (count!=0){
                return slow;
            }
            else{
                slow=head;
                count++;
            }
        }
        }
    
};
Node* removeLoop(Node* head){
      Node* slow=head;
    Node* fast=head;
    int count=0;
    while (fast!=NULL){
        fast->next=head->next;
        if (fast!=NULL){
            fast=fast->next;
            slow=slow->next
            ;
            
        }
        if (slow==fast){
            slow=head;
            break;
        }
    }
    Node* prev= fast;
    while(slow!=fast){
        prev=fast;
        slow=slow->next;
        fast= fast->next;
    }
    prev->next=NULL;
    return slow;

};
int main(){
    Node* head= new Node(10);
    Node* first= new Node(20);
    Node* second= new Node(30);
    Node* third= new Node(40);
    Node* fourth= new Node(50);
    Node* fifth= new Node(60);
    Node* sixth= new Node(70);
    

    
    head->next=second;    second->next=third;    third->next=fourth;    fourth->next=fifth;    fifth->next=sixth;
    sixth->next=second;
    Node* a=loopatPos(head);
    cout<<a->data<<endl;
return 0;
}