//Candies

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k = 0;
    int sum = 0;
    while (sum+k+1<=n){
        k+=1;
        sum+=k;
    }cout<<k;
    return 0;
}

//2nd largest element

#include<bits/stdc++.h>
using namespace std;

int slar(vector <int> arr, int n){
    int larg = arr[0];
    int slarg = INT_MIN;
    for (int i=0; i<n; i++){
        if (arr[i]>larg){
            slarg=larg;
            larg = arr[i];
        }else if (arr[i]<larg && arr[i]>slarg){
            slarg=arr[i];
        }
    }return slarg;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<slar(arr,n);
    return 0;
}