// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n){
//     if (n<=1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }

// int main(){
//     int n;
//     cin>>n;
//     for (int i=0; i<n; i++){
//         cout<<fib(i)<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//Optimal

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    for (int i=0; i<n;i++){
        cout<<a<<" ";

        int c = a+b;
        a= b;
        b=c;
    }
    return 0;
}