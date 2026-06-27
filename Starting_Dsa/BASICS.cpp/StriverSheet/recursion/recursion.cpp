#include<bits/stdc++.h>
using namespace std;

void fun(int i, int n){
    if(i>n){
        return;

    }
    cout<<i<<" ";
    i++;
    fun(i, n);
}


int main(){
    system("cls");
    int n;
    cin>>n;
    fun(1,n);
    return 0;
}