#include<bits/stdc++.h>
using namespace std;

//Brute

int main(){
    int matrix[4][4]={{5,1,9,11}, {2,4,8,10}, {13,3,6,7}, {15,14,12,16}};
    int matrix2[4][4]={};
    for (int i=0; i<4; i++){
        for (int j = 0; j<4; j++){
            matrix2[j][3-i]=matrix[i][j];
        }
    }for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            cout<<matrix2[i][j]<<"   ";
        }cout<<endl;
    }
    return 0;
}

//Optimal (1st transpose the matrix then reverse every row)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};