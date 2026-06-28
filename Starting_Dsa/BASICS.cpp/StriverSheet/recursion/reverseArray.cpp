#include<bits/stdc++.h>
using namespace std;

//reversing an array using recursion

void reverse(int s, int arr[], int e){
    if(s>e){
        return;
    }
    swap(arr[s],arr[e]);
    reverse(s+1, arr, e-1);
}

int main(){
    system("cls");
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    reverse(0,arr,size-1);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}