#include<bits/stdc++.h>
#include <vector>
#include <climits>
using namespace std;
 int maxSubArray(vector<int>& nums){
        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;
         for (int k=0;k<n;k++){
                     sum+=nums[k];
                    if(sum>maxi){
                        maxi=sum;

                    }
                    
                        if(sum<0){
                            sum=0;
                        }

                    
                    
                }
            
    
        return maxi;
    }