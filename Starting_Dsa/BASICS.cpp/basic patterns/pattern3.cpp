#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter the number = ";
    // cin>>n;
    // int i;
    // for(i=1;i<=n*n;i++){
    //     cout<<"   "<<i<<"   ";
    //     if (i%n==0){
    //         cout<<endl;
    //     }
    // }
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    int num=1;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<"    "<<num<<"    ";
            num+=1;
        }cout<<endl;
    }


    return 0;
}