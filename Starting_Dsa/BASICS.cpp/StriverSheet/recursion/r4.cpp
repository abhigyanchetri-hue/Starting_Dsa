#include<bits/stdc++.h>
using namespace std; 

void fun(int i, int sum){
        if (i<1){
            cout<<sum;
            return;
        }
        fun(i-1, sum+i);
    }

int main(){
    system("cls");
    int sum=0;
    int n;
    cin>>n;
    fun(n,sum);
    return 0;
}
