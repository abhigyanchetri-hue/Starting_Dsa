#include<iostream>
using namespace std;

int main(){
    int n=4;
    int sum=1;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<" "<<sum<<" ";
            sum+=1;
        }cout<<endl;
    }
    return 0;
}