#include<bits/stdc++.h>
using namespace std;

//Brute

vector<int> rearrange(vector<int> arr, int n){
    vector <int> temppos;
    vector <int> tempneg;
    for (int i=0 ;i<n; i++){
        if (arr[i]>0){
            temppos.push_back(arr[i]);
        }else {
            tempneg.push_back(arr[i]);
        }
    }
    int index1 = 0;
    for (int i=0; i<n; i+=2){
        arr[i]=temppos[index1];
        index1++;
    }
    int index2=0;
    for (int i=1; i<n; i+=2){
        arr[i]=tempneg[index2];
        index2++;
    }
    return arr;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector <int> result = rearrange(arr, n);
    for (int i=0 ;i<n; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

//Optimal

vector<int> rearrange(vector<int> arr, int n){
    vector<int> ans(arr.size());
    int indexpos = 0;
    int indexneg = 1;
    for (int i=0; i<arr.size(); i++){
        if (arr[i]>0){
            ans[indexpos]=arr[i];
            indexpos+=2;
        }else{
            ans[indexneg]=arr[i];
            indexneg+=2;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector <int> result = rearrange(arr, n);
    for (int i=0 ;i<n; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}

//2nd variety ( the number of positives and negative may not be equal)
//Optimal is brute of earlier version

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int> arr, int n){
    vector<int> pos,neg;
    for (int i=0; i<n; i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }else{
            neg.push_back(arr[i]);
        }
    }
    if (pos.size()>neg.size()){
        for (int i=0; i<neg.size(); i++){
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }
        int index = neg.size()*2;
        for (int i=neg.size(); i<pos.size(); i++){
            arr[index]=pos[i];
            index++;
        }
    }else {
        for (int i=0 ;i<pos.size(); i++){
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }
        int index = pos.size()*2;
        for (int i=pos.size(); i<neg.size(); i++){
            arr[index]=neg[i];
            index++;
        }
    }return arr;
    
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector <int> result = rearrange(arr, n);
    for (int i=0 ;i<n; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
