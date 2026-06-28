#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;   //number of elements of array
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    
    //queries and fetching

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }

    return 0;
}