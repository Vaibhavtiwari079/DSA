#include <iostream>
//#include<stack>
using namespace std;

class Stack{
    public:

    int *arr;
    int top;
    int size;

    Stack(int size){
        arr =new int[size];
        this->size=size;
        top=-1;   
         
         }
         void push(int data){
            if (size-top>1){
                top++;
                arr[top]=data;


            }
            else{
                cout<<"space not avail"<<endl;
            }
         }
         void pop(){
            if(top==-1){
              cout<<"stack is empty"<<endl;
            }
            else{
                top--;
            }
         }
         void getTop(){
            if (top==-1){
                cout<<"stack is empty"<<endl;

            }
            else{
                cout<<arr[top]<<endl;

            }
         }
      int getsize(){
        return top+1;
      }
      bool isEmpty(){
        if (top==-1){
            return true;
        }
        else{
            return false;
        }
      }

};  

int main(){
    // //creation
    // stack<int> st;


    // /// insertion
    // st.push(10);
    // st.push(200);

    // // checking element at top
    // cout<<st.top()<<endl;




    //manual crtn
    Stack st(10);
    st.push(10);
    st.getTop();   
    return 0;  
 
}