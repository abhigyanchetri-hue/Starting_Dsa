#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long fif = n%15;
    long long n1 = n/15;  //number of 15 shot guns used
    long long ten = fif%10;
    long long n2 = fif/10;  //number of 10 shot guns used
    long long five = ten%5;
    long long n3 = ten/5;
    if (five!=0){
        cout<<"NO"<<endl;
    }else{
        cout<<n1+n2+n3;
    }
    return 0;
}