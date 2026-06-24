#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int>ls;
    ls.push_front(5);
    ls.push_back(10);
    ls.emplace_front(15);
    ls.emplace_front();
    for(int it : ls){
        cout<<it << " ";
    }
    return 0;
}