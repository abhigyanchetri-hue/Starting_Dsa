#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    while (n--){
        long long sum = 1;
        long long x;
        cin>>x;
        for (long long i=1; i<=x; i++){
            sum*=i;
        }cout<<sum<<endl;
    }
    return 0;
}