#include<iostream>
#include<vector>
#include<stack> 
#include <limits.h> 
#include <climits>
using namespace std;
vector<int> prevSmaller(vector<int> &input){
    stack<int> s;
    s.push(-1);

    vector<int> ans(input.size());

    for(int i=0;i<input.size();i++){

    int curr=input[i];
    while(s.top()!=-1  &&input[s.top()]>=curr){
        s.pop();
    }
    ans[i]=s.top(); 

    s.push(i);
    }
    return ans;
}
vector<int> nextSmaller(vector<int> &input){
    stack<int> s;
    s.push(-1 );

    vector<int> ans(input.size());
    for(int i=input.size()-1;i>=0;i--){
     int curr=input[i];
    while(s.top()!=-1  &&input[s.top()]>=curr){
        s.pop();
    }   
    //chota value mil
    ans[i]=s.top();

    //push into stack
    s.push(i);

  }

    return ans;
}
int getRectangularAreaHistogram( vector<int> &height){
    vector<int> prev= prevSmaller(height);

    vector<int> next=nextSmaller(height);
    int size=height.size();
    int maxArea=INT_MIN; 
    for(int i=0;i<height.size();i++){
        int length=height[i];
        if (next[i]==-1){
            next[i]=size;
        }
        int width=next[i]-prev[i]-1;

        int area=length*width;
        maxArea=max(maxArea,area);
    }
    return maxArea;

}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    cout<<getRectangularAreaHistogram(v)<<endl;
    return 0;
}