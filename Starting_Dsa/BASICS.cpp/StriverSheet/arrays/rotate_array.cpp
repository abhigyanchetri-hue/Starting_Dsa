#include<bits/stdc++.h>
using namespace std;

//left rotate array by k places

void rotate_left(vector<int>& arr, int n, int k){
    k%=n;
    int temp[k];
    for (int i=0; i<k; i++){    //storing k elements in temp[] 
        temp[i]=arr[i];
    }
    for (int i = k; i<n; i++){
        arr[i-k]=arr[i];
    }
    int j=0;
    for (int i=n-k; i<n; i++){
        arr[i]=temp[j];
        j++;
    }

}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    rotate_left(arr, n, k);

    for (int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}