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
         cout<<"enter data for left part"<<endl;
        root->left=buildTree();
        cout<<"enter data for right part"<<endl;
        root->right=buildTree();
         return root;    
    }
int convertIntosumTree(Node* &root){
    if (root==NULL){
        return 0;
    }

    int leftsum=convertIntosumTree(root->left);
    
    int rightsum=convertIntosumTree(root->right);
    root->data=leftsum+rightsum+root->data;

    return root->data;

}
int main(){
    Node* root=NULL;
   root= buildTree();
   cout<<convertIntosumTree(root);
   
    return 0;
}