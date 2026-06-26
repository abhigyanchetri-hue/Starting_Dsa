#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i*i<=n; i++){
        if(n/i==i){
            cout<<i<<" ";
        }
        else if(n%i==0){
            cout<<i<<" ";
            cout<<(n/i)<<" ";
        }
    }
    return 0;
}