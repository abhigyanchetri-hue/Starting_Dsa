#include<bits/stdc++.h>
using namespace std;

//map hashin for strings

int main(){
    string s;
    cin>>s;
    map<char, int> mpp;
    for(int i = 0; i<s.size(); i++){
        mpp[s[i]]++;
    }

    //queries
    int q;
    cin>>q;
    for (int i=0; i<q; i++){
        char c;
        cin>>c;
        cout<<mpp[c]<<endl;
    }
    return 0;
}