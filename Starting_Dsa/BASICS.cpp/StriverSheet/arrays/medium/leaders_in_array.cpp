#include<bits/stdc++.h>
using namespace std;

//Brute

vector<int> leaders(vector<int> arr, int n){
    vector<int> ans;
    for (int i=0; i<n; i++){
        int lead = true;
        for (int j=i+1; j<n; j++){
            if (arr[j]>arr[i]){
                lead = false;
            }
        }
        if (lead == true){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> result = leaders(arr,n);
    for (int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}

//Optimal

vector<int> leaders(vector<int> arr, int n){
    int maxx = INT_MIN;
    vector<int> lead;
    for (int i=n-1; i>=0; i--){
        if(arr[i]>maxx){
            maxx = arr[i];
            lead.push_back(arr[i]);
        }
    }
    return lead;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> result = leaders(arr,n);
    for (int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}