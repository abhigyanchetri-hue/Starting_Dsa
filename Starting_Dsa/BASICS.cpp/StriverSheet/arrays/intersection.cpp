// #include<bits/stdc++.h>
// using namespace std;



// vector<int> intersectionArr(vector<int>& arr1, int n1, vector<int>& arr2, int n2){
//     vector<int> temp;
//     for (int i=0; i<n1;i++){
//         for (int j =0; j<n2; j++){
//             if (arr1[i]==arr2[j]){
//                 if (temp.size()==0 || temp.back()!=arr1[i]){
//                     temp.push_back(arr1[i]);
//                 }
//             }
//         }
//     }
//     return temp;
// }

// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     vector <int> arr1(n1),arr2(n2);
//     for (int i=0; i<n1; i++){
//         cin>>arr1[i];
//     }
//     for (int i=0; i<n2; i++){
//         cin>>arr2[i];
//     }
//     vector <int> result = intersectionArr(arr1,n1,arr2,n2);
//     for (int i=0; i<result.size(); i++){
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }

//Optimal

#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionArr(vector<int>& arr1, int n1, vector<int>& arr2,int n2){
    int i = 0;
    int j = 0;
    vector<int> temp;
    while (i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if (arr1[i]>arr2[j]){
            j++;
        }
        else if (arr1[i]==arr2[j]){
            if (temp.size()==0 || temp.back()!=arr1[i]){
                temp.push_back(arr1[i]);
                i++;
                j++;
            }
        }
    }
    return temp;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector <int> arr1(n1), arr2(n2);
    for (int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    for (int i=0; i<n2; i++){
        cin>>arr2[i];
    }
    vector<int> result = intersectionArr(arr1,n1,arr2,n2);
    for (int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}