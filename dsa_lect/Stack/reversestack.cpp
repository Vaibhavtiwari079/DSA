    #include <iostream>
#include<stack>
using namespace std;

void insertatBottom(stack<int> &s,int target){
    if(s.empty()){
        s.push(target);

        return;
    }
    int topElement=s.top();
    s.pop(); 
    insertatBottom(s,target);
    //bt
    s.push(topElement);

}


void reversestack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    //main
    int target=s.top();
    s.pop();
    //recursive call
    reversestack(s);
    //insert at bottom
    insertatBottom(s,target);
}
int main(){
    
 stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    
    s.push(70);

    reversestack(s); 
     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
     }
 
    return 0;
}