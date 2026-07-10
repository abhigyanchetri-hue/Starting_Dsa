#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt;
    while(n!=0){
        int l = n%10;
        n/=10;
        if (n==0){
            cnt = l;
        }
    }
    if (cnt%2==0){
        cout<<"EVEN";
    }else{
        cout<<"ODD";
    }
    return 0;
}