#include<bits/stdc++.h>
using namespace std;

//Union of 2 sorted arrays

vector <int> union(vector<int> a1, vector<int> a2, int n1, int n2){
    set<int> st;
    vector<int> temp;
    for(int i=0; i<n1; i++){
        st.insert(a1[i]);
    }
    for(int i=0; i<n2; i++){
        st.insert(a2[i]);
    }
    for (auto it : st){
        temp.push_back(it);
    }
    return temp;
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
    vector <int> result = union(a1,a2,n1,n2);
    for (int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

//Intersection of 2 sorted arrays

//Brute

vector<int> inter(vector<int> a1, vector<int> a2, int n1, int n2){
    vector<int> temp;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if (a1[i]==a2[j]){
                if (temp.size()==0 || temp.back()!=a2[j]){
                    temp.push_back(a2[j]);
                }
            }
        }
    }
    return temp;
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

//Optimal

#include<bits/stdc++.h>
using namespace std;

vector<int> inter(vector<int> a1, vector<int> a2, int n1, int n2){
    vector<int> temp;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if (a1[i]<a2[j]){
            i++;
        }else if (a1[i]>a2[j]){
            j++;
        }else if (a1[i]==a2[j]){
            temp.push_back(a1[i]);
            i++;
            j++;
        }
    }return temp;
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