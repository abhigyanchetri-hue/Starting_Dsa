#include<iostream>
using namespace std;

//to swap the max and min element of array

void swapMaxMin(int arr[],int sz){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int i;
    int mini,maxi;
    for(i=0;i<sz;i++){
        smallest = min(smallest,arr[i]);
        largest = max(largest,arr[i]);
        
    }for (i=0;i<sz;i++){
        if(arr[i]==smallest){
            mini=i;
        }else if(arr[i]==largest){
            maxi=i;
        }
    }swap(arr[mini],arr[maxi]);
}
int main(){
    system("cls");
    int arr[]={1,3,5,8,22,89,7,33,55};
    int size=9;
    swapMaxMin(arr,size);
    int i;
    for (i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}