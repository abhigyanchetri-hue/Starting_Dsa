// #include<bits/stdc++.h>
// using namespace std;

// //Brute o(n^2)

// bool ls(vector<int> arr, int n, int x){
//     for (int i=0; i<n; i++){
//         if (arr[i]==x){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for (int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int longest = 1;
//     for (int i=0; i<n; i++){
//         int x = arr[i];
//         int cnt = 1;
//         while (ls(arr,n, x+1) == true){
//             x+=1;
//             cnt+=1;
//             longest = max(longest, cnt);
//         }
//     }cout<<longest;
//     return 0;
// }

//Better 

#include<bits/stdc++.h>
using namespace std;

bool ls(vector<int> arr, int n, int x){
    for (int i=0; i<n; i++){
        if (arr[i]==x){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int longest = 1;
    for (int i=0; i<n; i++){
        int x = arr[i];
        int cnt = 1;
        while (ls(arr,n, x+1) == true){
            x+=1;
            cnt+=1;
            longest = max(longest, cnt);
        }
    }cout<<longest;
    return 0;
}