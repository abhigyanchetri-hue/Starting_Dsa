#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int hash[n+1]={0};
    int arr[n-1];
    for (int i=0; i<n-1; i++){
        cin>>arr[i];
        hash[arr[i]]++;
    }
    for (int i=1; i<=n; i++){
        if (hash[i]==0){
            cout<<i;
            break;
        }
    }

    return 0;
}

//used hashing (better approach)