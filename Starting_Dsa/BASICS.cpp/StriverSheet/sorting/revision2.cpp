#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int min = i;
        for (int j =i+1; j<n; j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }swap(arr[min], arr[i]);
    }
}
    
void bubble_sort(int arr[], int n){
    for (int i=n-1; i>0; i--){
        for (int j = 0; j<i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void insertion_sort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int j = i;
        while (j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

void merge(vector <int>& arr, int low, int mid, int high){
    int left = low;
    int right = mid +1;
    vector <int> temp;
    while((left <=mid) && (right<=high)){
        if (arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    }
}

void mS(vector <int>& arr, int low, int high){
    if (low==high){
        return;
    }
    int mid = (low+high)/2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr,low,mid, high);   
}

int partition(vector <int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i<j){
        while (arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=1){
            j--;
        }
        if (i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void qS(vector <int>& arr, int low, int high){
    if (low<high){
        int pIndex=partition(arr,low,high);
        qS(arr,low,pIndex-1);
        qS(arr, pIndex+1, high);
    }
}

int main(){

    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    qS(arr, 0, arr.size()-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}