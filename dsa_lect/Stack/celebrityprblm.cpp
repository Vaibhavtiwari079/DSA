#include<vector>
#include<iostream>
#include <stack>
using namespace std;
int celebrity(vector<vector<int>>&M,int n){
stack<int>st;

//push all i stsack
for (int i=0;i<n;i++){
    st.push(i);
}

while(st.size()!=1){
    int a= st.top();st.pop();
    int b=st.top();st.pop();

    //if a knows b
    if(M[a][b]){
        st.push(b);
    }
    else{
        st.push(a);
    }
}
//chech celebrity
int mightceleb=st.top();st.pop();
for(int i=0;i<n;i++){
    if(M[mightceleb][i]!=0){
        return -1;
    }
}
for(int i=0;i<n;i++){
    if(M[i][mightceleb]!=0&&i!=mightceleb){
        return -1;
    }
}

return mightceleb;
}
int main(){
    return 0;

}