#include<iostream>
using namespace std;

//to print the unique element in an array

void unique(int arr[],int sz){
    int i,j;
    cout<<"Unique element = ";
    for (i=0;i<sz;i++){
        int count = 0;
        for (j=0;j<sz;j++){
        
            if((j!=i)&&(arr[i]==arr[j])){
                count+=1;
            }
        }if(count==0){
            cout<<arr[i]<< " ";
        }

        }
    }

int main(){
    int arr[]={1,1,2,2,3,3,3,4,4,4,4,4,5,6,7,8,6,7,8,9};
    int size=20;
    unique(arr,size);
    return 0;
}