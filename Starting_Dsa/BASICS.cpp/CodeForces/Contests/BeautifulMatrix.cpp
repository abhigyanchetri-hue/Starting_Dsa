#include<bits/stdc++.h>
using namespace std;


  //couldnt solve will try later


int main(){
    int i,j;
    vector <int> matrix;
    for(i=0 ; i<5; i++){   //number of rows
        for(j=0; j<5; j++){   //number of columns
            int val;
            cin>>val;
            matrix.push_back(val);
        }
    }
    int ans=0;
    int start=0;
    int end=4;
    for(i=0; i<5; i++){
        while(start<end){
        if ((matrix[start]==1)||(matrix[end]==1)){
            swap(matrix[start],matrix[start+1]);
            swap(matrix[end],matrix[end-1]);
            ans++;
        }
    }
    }
    
    return 0;
}