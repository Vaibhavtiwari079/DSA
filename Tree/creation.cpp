#include <iostream>
#include <queue>
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

    void levelOrderTraversal(Node* root){
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* temp =q.front();
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //LNR
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void preOrderTraversal(Node* root){
    if(root==NULL){
        return;

    }
    //NLR
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if(root==NULL){
        return;

    }
    //LRN
    
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
void levelOrder2Traversal(Node* root){
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node* temp =q.front();
            q.pop();

            if(temp==NULL){
                cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

            }
            else{
                 cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

            }
           
        }
    }

    int height(Node* root){
        if (root==NULL)
          return 0;
        
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    int ans=max(rightheight,leftheight)+1;
    return ans;
    }

int main(){
    Node* root=NULL;
    root=buildTree();
levelOrder2Traversal(root);
cout<<height(root);
    return 0;
}