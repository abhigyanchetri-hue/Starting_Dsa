#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the nummber = ";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<" "<<i<<" ";
        }cout<<endl;
    }
    return 0;
}