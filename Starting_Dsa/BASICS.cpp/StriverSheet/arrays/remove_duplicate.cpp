#include<bits/stdc++.h>
using namespace std;

int Uni_Element(vector<int>& arr, int n){
    int i = 0;
    for (int j=1; j<n; j++){
        if (arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }

    }return (i+1);

}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Unique elements int the array= "<<Uni_Element(arr,arr.size());
    return 0;
}


//leetcode
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for (int j = 1; j<nums.size(); j++){
            if (nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }return (i+1);
    }
};