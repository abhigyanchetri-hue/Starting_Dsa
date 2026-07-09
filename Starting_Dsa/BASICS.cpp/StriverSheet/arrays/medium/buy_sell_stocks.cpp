// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int buy=0;
//     int maxp=0;
//     for (int i=1; i<n; i++){
//         int sell = arr[i];
//         for (int j=i-1; j>=0; j--){
//             buy=arr[j];
//             maxp=max(maxp, sell-buy);
//         }
//     }cout<<maxp;
//     return 0;
// }

//Optimal

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int minp=INT_MAX;
    int maxp=0;
    for (int i=0; i<n; i++){
        if (arr[i]<minp){
            minp=arr[i];
        }
        else if (arr[i]-minp > maxp){
            maxp = arr[i] - minp;
        }
    }cout<<maxp;
    return 0;
}