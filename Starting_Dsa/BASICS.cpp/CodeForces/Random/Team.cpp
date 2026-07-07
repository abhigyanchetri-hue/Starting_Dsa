#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  //number of problems
    cin>>n;
    int num=0;
    int i;
    bool Petya, Vasya, Tonya;
    for(i=0; i<n; i++){
        cin>>Petya>>Vasya>>Tonya;
        int sum=Petya+Vasya+Tonya;
        if (sum>2){
            num+=1;
        }
    }cout<<num;
    return 0;
}