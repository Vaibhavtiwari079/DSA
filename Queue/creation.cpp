#include<iostream>
#include <queue>
using namespace std;
class Cirqueue{
 public:
 int size;
 int *arr ;
 int front;
 int rear;

 Cirqueue(int size){
    this->size=size;
    arr= new int[size];
    front=-1;
    rear=-1;

 }
 void push(int data){
    //
    if (front==0 &&rear==size-1){
        cout<<"space not found"<<endl;

    }
    else if(front==-1){
        front=rear=0;
        arr[rear]=data;

    }
    else if(rear==size-1&& front!=0){
        rear=0;
        arr[rear]=data;
    }
    else{
        rear++;
        arr[rear]=data;
    }
 }
};
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size){
        this->size=size;
        arr= new int[size];
        front=0;
        rear=0;
    }
    void push(int data){
        if(rear==size){
            cout<<"size is full"<<endl;

        }
        else{
            arr[rear]=data;
            rear++;

        }
    }
    void pop(){
        if (front==rear){
            cout<<"q is empty"<< endl;
        }
        else{
            arr[front]=-1;
            front++;
            
        }
    }
};


int main(){
    queue<int>q;
    q.push(15);
    q.push(20);
    q.pop();

};