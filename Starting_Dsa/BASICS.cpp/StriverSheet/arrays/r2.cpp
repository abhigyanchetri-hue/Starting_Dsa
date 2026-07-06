#include<bits/stdc++.h>
using namespace std;

//Intersection of 2 sorted arrays

vector <int> inter(vector<int> a1, vector<int> a2, int n1, int n2){

}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> a1(n1), a2(n2);
    for (int i=0; i<n1; i++){
        cin>>a1[i];
    }
    for (int i=0; i<n2; i++){
        cin>>a2[i];
    }
    vector <int> result = inter(a1,a2,n1,n2);
    for (int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}