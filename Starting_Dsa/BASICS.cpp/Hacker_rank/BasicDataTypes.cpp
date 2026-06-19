#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int a;
    long l;
    char c;
    float f;
    double d;
    cin>>a>>l>>c>>f>>d;
    cout<<a<<endl<<l<<endl<<c<<endl;
    cout<<fixed<<setprecision(3)<<f<<endl;
    cout<<fixed<<setprecision(9)<<d<<endl;
    return 0;
}
