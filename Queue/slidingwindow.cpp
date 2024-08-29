#include<iostream>
#include<deque>
using namespace std;
void solve(int arr[], int n,int k){
    deque<int>q;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            q.push_back(i);
        }
    }
     //removal
    for (int i=k;i<n;i++){
        if(q.empty()){
            cout<<0<<endl;
        }
        else{
            cout<<arr[q.front()]<<endl;
        }
        while(!q.empty()&&(i-q.front())>=k){
            q.pop_front();
             
        }
        if(arr[i]<0){
            q.push_back(i);
        }
    }//last index
    if(q.empty()){
        cout<<0<<endl;
        
    }else{
        cout<<arr[q.front()]<<endl;
    }

}
int main(){
    int arr[]={12,-1,-7,8,-15,30,16,28};
    int size=8;
    int k=3;
    solve(arr,size,k); 
    return 0;
}