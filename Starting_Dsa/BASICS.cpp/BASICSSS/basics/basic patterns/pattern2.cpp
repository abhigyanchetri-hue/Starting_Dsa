#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        char alpha='A';
        for(j=1;j<=n;j++){
            cout<<alpha<<" ";
            alpha+=1;
        }cout<<endl;
    }
    return 0;
}