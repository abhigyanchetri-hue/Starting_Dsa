#include<bits/stdc++.h>
using namespace std;

//Brute

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    for (int i = 0;i<n; i++){
        int num=arr[i];
        int cnt=0;
        for (int j=0; j<n; j++){
            if (arr[j]==num){
                cnt+=1;
            }
        }
        if (cnt==1){
            cout<<num;
        }
    }
    return 0;
}

//Better

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    //searching for max element for size of hash array

    int maxi=arr[0];
    for (int i=0; i<n;i++){
        if (arr[i]>maxi){
            maxi=arr[i];
        }
    }
    int hash[maxi+1]={0};
    for (int i = 0; i<n; i++){
        hash[arr[i]]++;
    }
    for (int i = 0; i<maxi+1; i++){
        if (hash[i]==1){
            cout<<i;
        }
    }
}

//Optimal

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    return 0;
}