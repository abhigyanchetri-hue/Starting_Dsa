#include<iostream>
using namespace std;

//intersection of two arrays

void interSection(int arr1[],int arr2[],int sz1,int sz2){
    int i,j;
    cout<<"The intersection elements of both arrays is = ";
    for(i=0;i<sz1;i++){
        for(j=0;j<sz2;j++){
            if (arr1[i]==arr2[j]){
                cout<<arr2[j]<<" ";
            }
        }
    }
}

int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={2,3,5,6,9};
    int size1=4,size2=5;
    interSection(arr1,arr2,size1,size2);
    
    return 0;
}