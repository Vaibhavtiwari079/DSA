Node* reversell(Node* head){
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