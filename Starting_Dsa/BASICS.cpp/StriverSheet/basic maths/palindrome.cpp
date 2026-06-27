#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int reverse = 0;
    cin>>n;
    int copy=n;
    if (n<0){
        cout<<"not palindrome";
        return 0;

    }
    while(n!=0){
        reverse = (reverse*10)+(n%10);
        n/=10;
    }
    
    if( copy==reverse){
        cout<<"Palindrome";
    }else{
        cout<<"not palindrome";
    }
}


//leetcode

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        int ans=0;
        int n=x;
        while(x!=0){
            int l=x%10;
            if ((ans>INT_MAX/10) || (ans<INT_MIN)){
                break;
            }
            ans=ans*10+l;
            x/=10;
        }
        if(n==ans){
            return true;
        }else{
            return false;
        }
    }
};