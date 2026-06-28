#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if (n<=1){
        return n;
    }
    int last = fibo(n-1);
    int slast = fibo(n-2);
    return last+slast; 
}

int main(){
    system("cls");
    int n;
    cout<<"The term of fibonacci you want = ";
    cin>>n;
    cout<<"The required number = "<<fibo(n);
    return 0;
}