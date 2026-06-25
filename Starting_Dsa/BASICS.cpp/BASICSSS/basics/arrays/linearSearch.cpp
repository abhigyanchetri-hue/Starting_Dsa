#include<iostream>
using namespace std;

//linear seach of an array

int linearSearch(int arr[],int sz,int target ){
    int i;
    for(i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }return -1;
}

int main(){
    int arr[]={1,4,7,9,4,11};
    int sz=6;
    int target=-5;
    cout<<"The index of the target element is = "<<linearSearch(arr,sz,target);
    return 0;
}