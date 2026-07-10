#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b;
    cin>>a>>b;
    if (a==0){
        if(b!=0){
            cout<<"Eixo Y";
        }else {
            cout<<"Origem";
        }
    }
    else if (b==0){
        if(a!=0){
            cout<<"Eixo X";
        }
        else{
            cout<<"Origem";
        }
    }
    else if(a>0){
        if (b>0){
            cout<<"Q1";
        }
        else{
            cout<<"Q4";
        }
    }
    else if(a<0){
        if(b>0){
            cout<<"Q2";
        }
        else{
            cout<<"Q3";
        }
    }
    
    return 0;
}