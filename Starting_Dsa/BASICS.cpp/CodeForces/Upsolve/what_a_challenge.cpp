#include<bits/stdc++.h>
using namespace std;

int main(){
    double x1,y1,r;
    cin>>x1>>y1>>r;
    double x2,y2;
    cin>>x2>>y2;
    double dis = sqrt(((y2-y1)*(y2-y1))+((x2-x1)*(x2-x1)));
    if (dis<=r){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
    return 0;
}