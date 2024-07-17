#include<iostream>


using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;

    }
};
    Node* buildTree(){
        int data;
        cout<<"enter the data"<<endl;
        cin>>data;
        if(data==-1){
            return NULL;

        }
        Node* root=new Node(data);
         cout<<"enter data for left part "<<data<<endl;
        root->left=buildTree();
        cout<<"enter data for right part "<<data<<endl;
        root->right=buildTree();
         return root;    
    }
 bool kancestar(Node* root ,int k,int p){
    if (root==NULL){
        return false;
    }
    if(root->data==p){
        return true;
    }
    bool leftans=kancestar(root->left,k,p);
    bool rightans=kancestar(root->right,k,p);
    if (leftans ||rightans)
            k--;
        
    if(k==0){
            cout<<"Answer is"<<root->data<<" ";
            k=-1;
        }
        return leftans||rightans;
}
int main(){
    Node* root=NULL;
    root=buildTree();
    kancestar(root,1,4);
    return 0;
}