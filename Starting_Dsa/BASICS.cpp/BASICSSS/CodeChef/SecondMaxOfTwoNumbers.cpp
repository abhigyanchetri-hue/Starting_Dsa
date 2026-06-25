#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    system("cls");
    int n; //number of triplets to be checked
    cin>>n;
    while(n--){   //this loop runs exactly n times
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        cout<<"The second max of the 3 numbers is = "<<arr[1];
        return 0;
    }
    return 0;
}