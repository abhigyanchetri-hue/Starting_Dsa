#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int y = n/365;
    int r1 = n%365;
    int m = r1/30;
    int d = r1%30;
    cout<<y<<" years\n";
    cout<<m<<" months\n";
    cout<<d<<" days";
    return 0;
}