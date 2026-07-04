#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long k =0;
    long long sum = 0;
    while(sum+k+1<=n){
        k+=1;
        sum+=k;
    }
    cout<<k;
    return 0;
}