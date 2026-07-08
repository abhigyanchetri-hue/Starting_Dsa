//Brute(using sort)

//Better

#include<bits/stdc++.h>
using namespace std;

void sort1(vector<int> & arr, int n){
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            cnt0+=1;
        }else if(arr[i]==1){
            cnt1+=1;
        }else{
            cnt2+=1;
        }
    }
    for(int i=0; i<cnt0; i++){
        arr[i]=0;
    }
    for(int i=cnt0; i<cnt1+cnt0; i++){
        arr[i]=1;
    }
    for(int i=cnt1+cnt0; i<cnt2+cnt1+cnt0; i++){
        arr[i]=2;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort1(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//Optimal (Dutch national flag algorithm)

#include<bits/stdc++.h>
using namespace std;

void sort1(vector<int>& arr, int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort1(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}