#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");
    int n;
    cin>>n;
    int ans=0;
    while ( n != 0){
        int l=n%10;
        ans=(ans*10) + l;
        n=n/10;
    }cout<<ans;
    return 0;
}


//LEETCODE

class Solution {
public:
    int reverse(int x) {
        int ans=0;

        while(x!=0){

            int l = x % 10;

            if ((ans<INT_MIN/10) || (ans>INT_MAX/10)){

                return 0;

            }

            ans=(ans*10)+l;

            x=x/10;

        }
        
        return ans;  
    }
};