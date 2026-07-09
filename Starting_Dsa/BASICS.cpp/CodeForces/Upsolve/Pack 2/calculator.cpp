#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    char op;
    cin>>a>>op>>b;    //cin stops as it reaches non digit character

    long long result;
    if (op=='+'){
        cout<<a+b;
    }else if (op=='-'){
        cout<<a-b;
    }else if (op=='*'){
        cout<<a*b;
    }else {
        cout<<a/b;
    }
    
    return 0;
}