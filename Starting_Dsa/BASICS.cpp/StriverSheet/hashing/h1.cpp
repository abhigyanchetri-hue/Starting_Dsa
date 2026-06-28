#include<bits/stdc++.h>
using namespace std;

// //hashing for array of numbers

// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     //pre compute (hashing)

//     int hash[13]={0};
//     for(int i=0; i<size; i++){
//         hash[arr[i]]++;
//     }

//     //fetching queries

//     int q;
    
//     cin>>q;
//     for(int i=0; i<q; i++){
//         int number;
//         cin>>number;
//         cout<<hash[number]<<endl;
//     }

// }









int main(){
    string s;
    cin>>s;

    int hash[256]={0};  //for all 256 ascii characters 
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }

    //queries

    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    return 0;
}