#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reversekway(queue<int>&q,int k){
    stack<int>st;
     int count=0;
     int n=q.size();
     if (k==0&& k>n){
        return;
     }
 while(!q.empty()){
    st.push(q.front()); 
    q.pop();
    count++;

    if (count==k){
        break;
    }
 }
 while(!st.empty()){
    q.push(st.top());
    st.pop();
 }
 count=0;
 while(!q.empty()){
    int temp=q.front();
    q.pop();
    q.push(temp);
    count++;
    if(count==n-k ){
        break;
    }
 }

}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(15);
    reversekway(q,2);
return 0;
};