#include<bits/stdc++.h>
using namespace std;

//Brute

int maj(int arr[], int n){
    for (int i=0; i<n; i++){
        int cnt=0;
        for (int j=0; j<n; j++){
            if (arr[j]==arr[i]){
                cnt+=1;
            }
        }if (cnt>n/2){
            return arr[i];
        }
    }return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<maj(arr,n);
    return 0;
}

//Better (hashing)

#include<bits/stdc++.h>
using namespace std;

int maj(int arr[], int n){
    map<int,int> hash;
    for (int i=0; i<n;i++){
        hash[arr[i]]++;
    }
    for (auto it: hash){
        if (it.second > n/2){
            return it.first;
        }
    }return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<maj(arr,n);
    return 0;
}

//Optimal (Moore's Voting alogorithm)


#include<bits/stdc++.h>
using namespace std;

int maj(int arr[], int n){
    int cnt = 0;
    int el;
    for(int i=0; i<n; i++){
        if (cnt==0){     //Starting of Array or starting of a subarray acc to the algo iykyk
            cnt=1;
            el=arr[i];
        }
        else if (arr[i]==el){
            cnt++;
        }else {
            cnt--;
        }
    }
    int cnt1 = 0;
    for (int i=0; i<n; i++){
        if (arr[i]==el){
            cnt1++;
        }
    }if (cnt1>n/2){
        return el;
    }else{
        return -1;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<maj(arr,n);
    return 0;
}