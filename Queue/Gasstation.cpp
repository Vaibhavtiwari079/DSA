#include<iostream>
#include<queue>
using namespace std;


int cancompleteCircuit(vector<int>&gas,vector<int>&cost)
{
    int defecit=0;
    int balance=0;
    int start=0;


    for(int i=0;i<gas.size();i++){
        balance+=gas[i]-cost[i];
        if (balance<0){
            defecit+=balance;
            start=i+1;
            balance=0;
        }
    }
        if(defecit+balance>=0){
            return start;

        }
        else{
            return -1;
        }
    

}
















