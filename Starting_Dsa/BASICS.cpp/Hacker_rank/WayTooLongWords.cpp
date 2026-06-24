#include<iostream>
#include <string>
using namespace std;

int main(){
    system("cls");
    int n;
    cin>>n;
    cin.ignore();
    int i;
    for (i=0; i<n; i++){
        int words;
        string str;
        getline(cin,str);
        words=(str.length())-2;
        if(str.length()>10){
            cout<<str[0]<<words<<str[str.length()-1]<<endl;
        }else{
            cout<<str<<endl;
        }
        
    }
    return 0;
}