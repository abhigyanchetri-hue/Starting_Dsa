#include<bits/stdc++.h>
using namespace std;

//2nd largest element in array

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    set <int> st;
    for (int i =0; i<n; i++){
        st.insert(arr[i]);
    }
    int lar = *st.rbegin();
    int slar;
    if (*st.begin()==lar){
        cout<<-1;
    }else{
        for (auto it = st.rbegin(); it!=st.rend(); it++ ){
            if (*it!=lar){
            slar=*it;
            break;
            }
        }
        cout<<slar;
    }
    return 0;
}

//Optimal

#include<bits/stdc++.h>
using namespace std;

int slargest(vector<int> arr, int n){
    int lar = arr[0];
    int slar = INT_MIN;
    for (int i=0; i<n; i++){
        if (arr[i]>=lar){
            slar=lar;
            lar = arr[i];
        }else if (arr[i]<lar && arr[i]>slar){
            slar=arr[i];
        }
    }return slar;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int size = arr.size();
    cout<<"The second largest element is = "<<slargest(arr,size);
    return 0;
}
