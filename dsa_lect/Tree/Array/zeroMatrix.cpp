#include<iostream>
#include <vector>
using namespace std;
vector<vector<int>> zeroMatrix(vector<vector<int>>& matrix ,int n ,int m){
       int row[100]={0};
        int col[100]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (matrix[i][j]==0){
                    col[j]=1;
                    row[i]=1;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]==1||col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
        return  matrix;

    }