#include<iostream>
using namespace std;
 
void pattern(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<" * ";
        }cout<<endl;
    }
}

int main(){
    system("cls");

    //number of times the function is to be run
    int n;
    cin>>n;
    int i;
    for (i=0; i<n; i++){
        int t;
        cin>>t;
        pattern(t);
    }
    return 0;
    
}