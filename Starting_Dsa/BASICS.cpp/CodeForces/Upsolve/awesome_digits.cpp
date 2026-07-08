#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long sum=0;
    while(n!=0){
        long long l = n%10;
        if (l%2!=0){
            sum+=l;
        }
        n = n/10;
    }
    cout<<sum;
    return 0;
}