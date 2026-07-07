#include<bits/stdc++.h>
using namespace std;

//Overcomplicated 

int main(){
    int t;
    cin>>t;
    for (int i=0; i<t; i++){
        int x,y;
        cin>>x>>y;
        vector<int> arr;
        for(int i = 1; i<=x; i++){
            if (x%i==0){
                arr.push_back(i);
            }
        }
        bool found = false;
        for (int i=0; i<arr.size(); i++){
            int cnt = 0;
            if ((x/arr[i]==y) && (x%arr[i]==0)){
                found = true;
                break;
            }
        }
        if (found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


//Quicker way


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if (x%y==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

