#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int find){
    for (int i=0; i<n; i++){
        if (arr[i]==find){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){        
        cin>>arr[i];
    }
    int find;
    cin>>find;
    cout<<"The index of num to find = "<<linear_search(arr, n, find);
    return 0;
}