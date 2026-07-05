#include<bits/stdc++.h>
using namespace std;

//Brute

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int len=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            int sum=0;
            for(k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum==k){
                len=max(len,j-i+1);
            }
        }
    }cout<<len;
    return 0;
}