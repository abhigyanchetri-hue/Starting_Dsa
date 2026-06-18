#include<iostream>
using namespace std;

int main(){
    int a=5;
    int * b=&a;
    cout<<b<<endl;
    cout<<"The value(jo bhi variable ka address stored hai b me uska value print hoga) at b : "<<*b<<endl;
    int **c=&b;
    cout<<"The address of b is stored in c and add of b is : "<<&b<<endl;
    cout<<"The address of b is stored in c and add of b is : "<<c<<endl;
    cout<<"The value stored at c is the add of b that is : "<<*c<<endl;
    //c me b ka address stored hai, b me a ka address stored hai, *c matlab jo bhi stored h b me, and **c matlab jo bhi stored h a me!
    cout<<"The value at(value stored in c)that is value of a : "<<**c<<endl;
    
    return 0;
}