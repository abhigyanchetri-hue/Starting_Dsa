#include<iostream>
using namespace std;

void fibo(int n){
    int f=0;
    int i;
    for(i=1;i<=n;i+f){
        cout<<f<<endl;
        f+=i;
    }
}

int main(){
    system("cls");
    fibo(5);
    return 0;
}