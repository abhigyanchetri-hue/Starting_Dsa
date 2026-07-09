#include<bits/stdc++.h>
using namespace std;

//Brute ( checking every subarray with 3 loops --> o(n^3) )
//Better

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxi=arr[0];
    for (int i=0; i<n; i++){
        int sum=0;
        for (int j=i; j<n;j++){
            sum+=arr[j];
            maxi=max(maxi, sum);
        }
    }
    cout<<maxi;
    return 0;
}

//Optimal (Kadane's Algorithm)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    int start = -1;
    int maxi=INT_MIN;
    int ansstart = -1;
    int ansend = -1;
    for (int i=0; i<n;i++){
        if (sum==0){
            start = i;
        }
        sum+=arr[i];
        if (sum>maxi){
            maxi=sum;
            ansstart = start;
            ansend = i;
            
        }
        if (sum<0){
            sum=0;
        }
    }
    if (maxi<0){
        maxi=0;
    }
    cout<<maxi<<endl;
    cout<<ansstart<<" "<<ansend;
    return 0;
}