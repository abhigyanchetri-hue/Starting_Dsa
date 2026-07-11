#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int pos = 0;
    int neg = 0;
    int even = 0;
    int odd = 0;
    while(n--){
        int x;
        cin>>x;
        if (x>0){
            pos+=1;
        }
        if (x<0){
            neg+=1;
        }
        if (x%2==0){
            even+=1;
        }else {
            odd+=1;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;

    return 0;
}