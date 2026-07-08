#include<bits/stdc++.h>
using namespace std;

//Brute

bool sum2(int arr[], int n, int k){
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                continue;
            }else{
                int sum=arr[i]+arr[j];
                if(sum==k){
                    return true;
                }
            
            }
        }
    }return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    if (sum2(arr, n, k)) cout<<"Yes";
    else cout<<"No";
    return 0;
}

//Better (hashing)

#include<bits/stdc++.h>
using namespace std;

bool sum2(int arr[], int n, int k){
    map<int,int> hash;
    for (int i=0; i<n; i++){
        if (hash.find(k - arr[i])!=hash.end()){
            return true;
            break;
        }else{
            hash[arr[i]]=i;
        }
    }return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    if (sum2(arr, n, k)) cout<<"Yes";
    else cout<<"No";
    return 0;
}

//Optimal(greedy, two pointer approach)

#include<bits/stdc++.h>
using namespace std;

bool sum2(int arr[], int n, int k){
    sort(arr, arr+n);
    int i=0;
    int j=n-1;
    int sum=arr[i]+arr[j];
    while(i!=j){
        if (sum<k){
            sum-=arr[i];
            i++;
            sum+=arr[i];
        }else if(sum>k){
            sum-=arr[j];
            j--;
            sum+=arr[j];
        }else if(sum==k){
            return true;
        }
    }return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    if (sum2(arr, n, k)) cout<<"Yes";
    else cout<<"No";
    return 0;
}

//leetcode variant(return index)

//Brute

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        for (int i=0; i<nums.size(); i++){
            if (hash.find(target - nums[i])!=hash.end()){
                return {hash[target - nums[i]], i};
            }else {
                hash[nums[i]]=i;
            }
        }return {};
    }
};

//Optimal

//Use unordered map instead of map :)