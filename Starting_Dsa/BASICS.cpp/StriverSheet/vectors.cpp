#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> abhi;
    abhi.push_back(5);
    abhi.emplace_back(10);
    abhi.emplace_back(15);
    abhi.emplace_back(25);
    abhi.emplace_back(20);
    // vector <int> ::iterator it = abhi.begin();
    // cout<<*it<<endl;
    // cout<<*(it+2)<<endl;
    // cout<<abhi.back();
    for(auto it : abhi){
        cout<< it <<" "; 
    }
    return 0;
}