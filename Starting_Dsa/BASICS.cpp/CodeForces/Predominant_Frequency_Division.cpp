#include<bits/stdc++.h>
using namespace std;

//daym this is hard couldnt do shit

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<3){
            cout<<"NO";
        }else{
            map <int, int> hash;
            for (int i=0; i<n; i++){
                int temp;
                cin>>temp;
                hash[temp]++;
            }
            if (hash[1]>=3){
                cout<<"YES";
                break;
            }else if(hash[1]==2 && (hash[2]!=0 || hash[3]!=0)){
                cout<<"YES";
                break;
            }else if (hash[1])
        }
    }
    
    return 0;
}