#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    double n = (double)a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<(int)floor(n)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<(int)ceil(n)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<(int)round(n)<<endl;
    return 0;
}