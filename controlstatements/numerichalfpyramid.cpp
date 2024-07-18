#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cout<<"enter the number of rows"<<endl;
     cin>>n;
     for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
        if(j==i||j==0||i==n-1)
        cout<<j+1;
        else{
            cout<<" ";
        }
       }
       cout<<endl;
     }


    return 0;
}