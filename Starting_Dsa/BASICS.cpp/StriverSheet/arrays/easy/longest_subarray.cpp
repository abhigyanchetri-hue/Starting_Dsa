#include<bits/stdc++.h>
using namespace std;

//Brute

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int len=0;
    for (int i=0; i<n; i++){
        int sum =0;
        for (int j=i; j<n; j++){
            sum+=arr[j];
            if(sum==m){
                len=max(len,j-i+1);
            }else  if (sum>m){
                break;
            }
        }
    }cout<<len;
    return 0;
}

//Better (Prefix sum technique with hashing)--> This is Optimal for array having zeros and negatives

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    map<int, int> mpp;
    int sum = 0;
    int maxlen = 0;
    for (int i=0; i<n; i++){
        sum+=arr[i];
        if (sum==k){
            maxlen=max(maxlen,i+1);
        }
        int rem = sum-k;
        if (mpp.find(rem)!=mpp.end()){
            int len = i-mpp[rem];
            maxlen=max(maxlen, len);
        }
        if(mpp.find(sum)==mpp.end()){    //not to overwrite the map.. so that we get the longest subarray
            mpp[sum]=i;
        }

    }cout<<maxlen;

    return 0;
}

//Optimal (2 pointer - Sliding window - works only when all elements are non negative)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int i=0; int j=0;
    int maxlen = 0;
    int sum = arr[0];
    while (j<n){
        while (i<=j && sum>k){
            sum-=arr[i];
            i++;
        }
        if (sum==k){
            maxlen=max(maxlen, j-i+1);
        }
        j++;
        if (j<n){
            sum+=arr[j];
        }
    }
    cout<<maxlen;
    return 0;
}