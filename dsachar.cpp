#include<bits/stdc++.h>
using namespace std;
#include<string.h>
string removeDuplicates(string s){
    string ans="";
    int i=0;
    while (i<s.length()){
        if (ans.length()>0 && ans[ans.length()-1==s[i]]){
            ans.pop_back();

        }
        else{
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}
int main(){
    string s;
    cout<<"type a string new";
    cin>>s;
    string a=removeDuplicates(s);
    cout<<a;

    return 0;
}