#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i*i<=n; i++){
        if (n%i==0){
            sum+=1;
        }
    }if(sum > 1){
        cout<<"The number is not a prime";
    }else{
        cout<<"The number is prime";
    }
    return 0;
}