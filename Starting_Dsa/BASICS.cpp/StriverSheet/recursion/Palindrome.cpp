#include<bits/stdc++.h>
using namespace std;

//checking if a string is palindrome or not

bool palin(int i, string str, int n){
    if (i>=n/2){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    return palin(i+1, str, n);
}

int main(){
    system("cls");
    string str;
    getline(cin, str);
    if (palin(0, str, str.size())){
        cout<<"The string is a palindrome";
    }else {
        cout<<"The string is not a palindrome";
    }
    
    return 0;
}


//leetcode valid palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        while(start < end){
            if (!isalnum(s[start])){
                start++;
            }
            else if (!isalnum(s[end])){
                end--;
            }
            else if (tolower(s[start])!=tolower(s[end])){
                return false;
            }else{
                start++;
                end--;
            }
        }return true;
    }
};