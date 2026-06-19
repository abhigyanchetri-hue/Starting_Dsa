#include<iostream>
using namespace std;

int main(){

//to check if a number is prime or not

    int n;
    cout<<"The number n = ";
    cin>>n;
    int i;
    bool isprime = true;
    for(int i=2; i<n ; i++){
        if (n % i == 0){
            isprime=false;
            break;
        }
    }
    if (isprime==true){
        cout<<"The number is prime";
    
    }else{
        cout<<"The number is not a prime number";

    }
    
    
    return 0;
}