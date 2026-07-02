#include<bits/stdc++.h>
using namespace std;

//Brute

void shift_zeroes(vector<int>& arr, int n){
    vector <int> temp;

    for (int i=0; i<n; i++){
        if (arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int k = temp.size();
    for (int i=0; i<k; i++){
        arr[i]=temp[i];
    }
    for (int i=k; i<n; i++){
        arr[i]=0;
    }
}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    shift_zeroes(arr, n);

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


//Optimal

#include<bits/stdc++.h>
using namespace std;

void move_zeroes(vector <int> &arr, int n){
    int j=-1;
    for (int i=0; i<n; i++){
        if (arr[i]==0){
            j=i;
            break;
        }
    }
    if (j==-1){
        return;
    }
    for(int i =j+1; i<n; i++){
        if (arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }

}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    move_zeroes(arr, n);

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
