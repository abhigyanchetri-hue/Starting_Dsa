#include<iostream>
using namespace std;

void reverseArray(int arr[], int sz){
    int start = 0,end=sz-1;
    while (start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={2,4,7,11,43};
    int size=5;
    reverseArray(arr,size);

    int i;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}