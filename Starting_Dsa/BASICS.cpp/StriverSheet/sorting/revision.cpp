#include<bits/stdc++.h>
using namespace std;

//selection sort

void selection_sort(int arr[], int n){
    for ( int i = 0; i<=n-2; i++){
        for ( int j=i+1; j<=n-1; j++){
            if ( arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

//bubble sort

void bubble_sort( int arr[], int n){
    for (int i=n-1; i>0; i--){
        for ( int j =0; j<=i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

//insertion sort

void insertion_sort(int arr[], int n){
    for (int i=0; i<=n-1; i++){
        int j = i;
        while ( j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main(){
    system("cls");
    int n;
    cin>>n;
    int arr[n];
    for ( int i =0; i<n; i++){
        cin>>arr[i];
    }
    insertion_sort(arr, n);
    for ( int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}