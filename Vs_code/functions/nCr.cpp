#include<iostream>
using namespace std;

// nCr combination using factorials

int factorial(int n){
    int fact=1;
    int i;
    for(i=1;i<=n;i++){
        fact*=i;
    }return fact;
}
int main(){
    system("cls");
    int n,r;
    cout<<"The value of n = ";
    cin>>n;
    cout<<"The value of r = ";
    cin>>r;
    cout<<"The value of nCr is = "<<factorial(n)/(factorial(n-r)*factorial(r));
    return 0;
}