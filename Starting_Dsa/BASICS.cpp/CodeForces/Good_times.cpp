#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0; i<t; i++){
        int x;
        cin>>x;
        int y=1;
        while(x>0){
            y*=10;
            x/=10;
        }
        cout<<y+1<<endl;
    }
    return 0;
}