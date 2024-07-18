 #include <iostream>
#include<stack>
using namespace std;


void solve(stack<int> &s, int target){
    //base case
    if (s.empty()){
        s.push(target);
        return;
    }
    
        int topElement=s.top();
        s.pop();
        //recursive call
        solve(s,target);
        //backtracking
        s.push(topElement);
    
}
void insertatBottom(stack<int> &s,int data){
    if (s.empty()){
        cout<<"stack is empty"<<endl;
        return;


    }
    int target=s.top();
    ;
    solve(s,data);


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
    insertatBottom(s,40);
         cout<<"printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}