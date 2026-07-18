#include<bits/stdc++.h>
using namespace std;

//Better

int subArr(vector<int> arr, int n, int k){
    int cnt = 0;
    for (int i=0; i<n; i++){
        int sum = 0;
        for (int j=i; j<n; j++){
            sum+=arr[j];
            if (sum==k){
                cnt++;
            }
        }
    }return cnt;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<subArr(arr, n, k);
    return 0;
}

//Optimal (prefix sum)

#include<bits/stdc++.h>
using namespace std;

int subArr(vector<int> arr, int n; int k){
    int preSum = 0;
    int cnt = 0;
    map<int, int> mpp;
    mpp[0]=1;
    for (int i=0; i<n; i++){
        preSum+=arr[i];
        int remove = preSum-k;
        cnt+=mpp[remove];
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<subArr(arr, n, k);

    return 0;
}