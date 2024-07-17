#include <bits/stdc++.h>
#include<string.h>
using namespace std;


//Subsequences of a string
void findsubsequences(string str,string output,int index,vector<string> ans){
    // base case
    ;
    if (index>=str.length()){
        ///cout << ""<< output<< endl;
        ans.push_back(output);
        return;
    }
    char ch=str[index];
    //exclude the substr
    findsubsequences(str,output,index+1,ans);
    //include
    output.push_back(ch);
    findsubsequences(str,output,index+1,ans);
    
}
int main(){
   cout<<"hello";
   string str="abc";
   string output="";
   int index=0;
   vector<string> ans;
   findsubsequences(str,output,index,ans);
   //printing vector
   for (string s:ans){
    cout<<s;
   }
    return 0;
}