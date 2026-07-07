#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int i;
    int sum=0;
    vector<int> arr(n);
    for(i=0;i<n;i++){
        int b;
        cin>>b;
        arr[i]=b;
    }
    if(arr[k-1]>0){
        for(i=0;i<n;i++){
            if ( arr[i]>=arr[k-1]){
                sum+=1;
            }
        }
    }else if(arr[k-1]==0){
        for(i=0;i<n;i++){
            if(arr[i]>0){
                sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}