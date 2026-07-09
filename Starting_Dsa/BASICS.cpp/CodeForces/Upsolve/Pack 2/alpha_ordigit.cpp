#include<bits/stdc++.h>
using namespace std;

int main(){
    char n;
    cin>>n;
    if (n>='0' && n<='9'){
        cout<<"IS DIGIT"<<endl;
    }
    else{
        cout<<"ALPHA"<<endl;
        if (n>='A' && n<='Z'){
            cout<<"IS CAPITAL";
        }else{
            cout<<"IS SMALL";
        }
    }
    
    return 0;
}