#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");
    int n;
    cin>>n;
    int ans=0;
    while ( n != 0){
        int l=n%10;
        ans=(ans*10) + l;
        n=n/10;
    }cout<<ans;
    return 0;
}