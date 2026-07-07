#include<bits/stdc++.h>
using namespace std;

//Brute

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

//Optimal

#include<bits/stdc++.h>
using namespace std;

vector<int> sorted_union(vector<int>& a1, int n1, vector <int>& a2, int n2){
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if (a1[i]<=a2[j]){
            if (unionArr.size()==0 || unionArr.back()!=a1[i]){
                unionArr.push_back(a1[i]);
            }i++;
        
        }
        else if (a1[i]>=a2[j]){
            if (unionArr.size()==0 || unionArr.back()!=a2[j]){
                unionArr.push_back(a2[j]);
            }j++;
        }
    }
    while(i<n1){
        if (unionArr.size()==0 || unionArr.back()!=a1[i]){
            unionArr.push_back(a1[i]);
        }i++;
    }
    while(j<n2){
        if (unionArr.size()==0 || unionArr.back()!=a2[j]){
            unionArr.push_back(a2[j]);
        }j++;
    }
    return unionArr;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> a1(n1),a2(n2);
    for(int i=0; i<n1;i++){
        cin>>a1[i];
    }
    for(int i=0; i<n2;i++){
        cin>>a2[i];
    }
    vector<int> result=sorted_union(a1,n1,a2,n2);
    for (int i =0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}