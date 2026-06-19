#include<iostream>
using namespace std;

int main(){
    char ch='A';
    int n=5;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(j=0;j<=n-i;j++){
            cout<<ch;
        }ch=ch+1;
        cout<<endl;
    }
    return 0;
}