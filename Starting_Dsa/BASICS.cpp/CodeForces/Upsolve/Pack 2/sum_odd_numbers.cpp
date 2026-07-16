#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int sum = 0;
        int x,y;
        cin>>x>>y;
        int st = min(x,y);
        int end = max(x, y);
        for (int i = st+1; i<end; i++){
            if (i%2!=0){
                sum+=i;
            }
        }cout<<sum<<endl;
    }
    return 0;
}