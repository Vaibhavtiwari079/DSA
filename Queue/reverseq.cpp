#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseq(queue<int>&q){
    stack<int>st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
        }

     while(!st.empty()){
    q.push(st.top());
    st.pop();

   }
    
}
void printq(queue<int>&q){
while(!q.empty()){
   cout<<q.front()<<endl;
    q.pop();
}
}
void reverse(queue<int>&q){
    if(q.empty()){
        return;
    }
    else{
    int temp=q.front();
    q.pop();
    reverse(q);
    q.push(temp);
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    
    reverse(q);
printq(q);
return 0;
};