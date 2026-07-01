#include<bits/stdc++.h>
using namespace std;

//for strings

int main(){
    string s;
    cin>>s;
    int hash[256]={0};
    for (int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }

    //queries
    int q;
    cin>>q;
    for(int i = 0; i<q; i++){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }    
    return 0;
}