#include <iostream>
using namespace std;
int main(){
    system("cls");
    int age;
    cout<<"Tell me your age : "<<endl;
  cin>>age;
    if ((age<18) && (age>0)){
        cout<<"You are underage and cant come to the party"<<endl;

    }
    else if(age==18){
        cout<<"You are just 18 and will get a kid pass"<<endl;

    }
    else if(age<1){
        cout<<"You are not born yet, dont fuck with me!"<<endl;
    }
    else {
        cout<<"You are old enough, Welcome to the party!"<<endl;
    }
    return 0;
}
// int main(){
//     int age;
//     cout<<"Tell me your age : "<<endl;
//     cin>>age;
//     switch (age)
//     {
//     case 20 :
//     cout<<"your age is 20";
        
//     case 0 :
//     cout<<"you are not born yet!";
        
//     default:
//         cout<<"no special cases";
        
//     }
// }
