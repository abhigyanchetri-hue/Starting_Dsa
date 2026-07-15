#include<bits/stdc++.h>
using namespace std;

int main(){
    while (true){
        int sum = 0;
        int n,m;
        cin>>n>>m;
        if (n<=0 || m<=0){
            break;
        }
        int maxx = max(n,m);
        int minn = min(n,m);
        for (int i = minn; i<=maxx; i++){
            cout<<i<<" ";
            sum+=i;
        }cout<<"sum ="<<sum<<endl;
    }
    
    return 0;
}