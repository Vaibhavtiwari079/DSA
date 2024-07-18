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
Node* reversell(Node* &prev,Node* &current){ 
    
    if (current==NULL)
    {
        return prev;
    }
    else{
        Node* forward=current->next;
        current->next=prev;
        reversell(current,forward);
    }

};
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}
int main(){
    Node* first=new Node(10);
    Node* second=new Node(50);
    Node* third=new Node(60);
    first->next=second;
    second->next=third;
    Node* prev=NULL;

    Node* head=reversell(prev,first);
    cout<<"hello"<<endl;
    cout<<head<<endl;
    print(head);
    return 0;





}