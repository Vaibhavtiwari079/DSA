    #include <iostream>
#include<stack>
using namespace std ;
void insertSorted(stack<int>&s,int target){
    if (s.empty()){
        s.push(target);
        return; 

    }
    if(s.top()>=target){
        s.push(target);
        return;
    }
    int topElement=s.top();
    s.pop();
    insertSorted(s,target);
    //bt
    s.push(topElement);

      
}
void sortstack(stack<int> &s){
    //base casse
    if (s.empty()){
        return;
    }
    //main
    int topElement=s.top();
    s.pop();
    sortstack(s); 
    //bt
    insertSorted(s,topElement);
}
int main(){
    stack<int>s;
    s.push(7);
    s.push(11);
    s.push(3);
    sortstack(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();

    }
    return 0;
}