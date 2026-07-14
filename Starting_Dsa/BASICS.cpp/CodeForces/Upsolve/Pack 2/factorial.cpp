#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=0 ;i<n; i++){
        int sum = 1;
        int x;
        cin>>x;
        for (int j=1; i<=x; i++){
            sum*=i;
        }cout<<sum<<endl;
    }
    return 0;
}