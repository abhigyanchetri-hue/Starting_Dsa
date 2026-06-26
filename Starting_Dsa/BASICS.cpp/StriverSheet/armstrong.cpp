#include<bits/stdc++.h>
using namespace std;

//armstrong number check

int main(){
    int n;
    cin>>n;
    int copy=n;
    int sum=0;
    while(n!=0){
        int l=n%10;
        sum+=l*l*l;
        n/=10;
    }
    if(copy==sum){
        cout<<"Armstrong";

    }else{
        cout<<"Not Armstrong";
    }
    return 0;
}