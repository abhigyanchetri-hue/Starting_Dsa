#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    int gcd;
    cin>>n1>>n2;
    for(int i=1; i<=min(n1,n2); i++){
        if((n1%i==0)&&(n2%i==0)){
            gcd=i;
        }
    }
    cout<<"The GCD of "<<n1<<" and "<<n2<<" is "<<gcd;
    return 0;
}


//OR

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int gcd;
    for(int i=max(n1,n2); i>1; i--){
        if((n1%i==0)&&(n2%i==0)){
            gcd=i;
            break;
        }
    }cout<<"The GCD of "<<n1<<" and "<<n2<<" is "<<gcd;
    return 0;
}
