#include<iostream>
using namespace std;
 
int sumOfDigits(int a){
    int u=a%10;
    a=a/10;
    int t=a%10;
    a=a/10;
    int h=a%10;
    int sum=u+t+h;
    return sum;
}
int main(){
    int n;
    cout<<"The sum of any three digit number = ";
    cin>>n;
    cout<<" is "<<sumOfDigits(n);
    return 0;
}