#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if (n<1){
        return;
    }
    fun(n-1);
    cout<<n<<" ";
}
void fun2(int n, int i){
    if (i>n){
        return;
    }
    fun2(n, i+1);
    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;
    fun(n);
    fun2(n, 1);
    return 0;
}

