#include<bits/stdc++.h>
using namespace std;

vector <int> sorted_array(vector <int>& arr1, int n, vector<int>& arr2, int m){
    set<int> st;
    for (int i=0; i<n; i++){
        st.insert(arr1[i]);
    }
    for (int i=0; i<m; i++){
        st.insert(arr2[i]);
    }
    vector <int> temp;
    for (auto it : st){
        temp.push_back(it);
    }
    return temp;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector <int> arr1(n),arr2(m);
    for (int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for (int i=0; i<m; i++){
        cin>>arr2[i];
    }
    vector<int> result=sorted_array(arr1, n, arr2, m);
    for (int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}