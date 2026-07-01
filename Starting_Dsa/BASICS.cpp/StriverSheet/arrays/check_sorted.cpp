#include<bits/stdc++.h>
using namespace std;

bool sorted_arr(vector <int>& arr, int n){
    for (int i=1; i<n; i++){
        if (arr[i-1]>arr[i]){
            return false;
        }
    }return true;
}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    if (sorted_arr(arr, n)){
        cout<<"Sorted";
    }
    else {
        cout<<"Not Sorted";
    }
    return 0;
}