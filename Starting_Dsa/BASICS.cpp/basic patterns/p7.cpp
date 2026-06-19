#include<iostream>
using namespace std;

int main(){
    int n=4;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=i;j>0;j--){
            cout<<" "<<j<<" ";
        }cout<<endl;
    }
    return 0;
}