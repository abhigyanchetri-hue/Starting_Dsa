#include<bits/stdc++.h>
using namespace std;

//Brute o(n^2)

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

//Better 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    if (arr.size()==0) return 0;
    sort (arr.begin(), arr.end());
    int longest = 1;
    int cnt = 0;
    int lastsmall = INT_MIN;
    for (int i=0; i<n; i++){
        if (arr[i]-1==lastsmall){
            cnt+=1;
            lastsmall = arr[i];
        }else if (lastsmall !=arr[i]){
            lastsmall = arr[i];
            cnt=1;
        }
        longest = max(longest, cnt);
    }
    cout<<longest;
    return 0;
}

//Optimal

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    set<int> st;
    for (int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    int longest = 1;
    for (auto it : st){
        if (st.find(it-1)==st.end()){
            int cnt= 1;
            int x = it;
            while (st.find(x+1)!=st.end()){
                x+=1;
                cnt+=1;
            }longest = max(longest, cnt);
        }
    }cout<<longest;
    return 0;
}