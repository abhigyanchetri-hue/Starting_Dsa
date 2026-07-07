#include<bits/stdc++.h>
using namespace std;

//Brute

int main(){
    long long n;
    cin>>n;
    vector<long long> arr;
    for(int i = 0; i<n-1; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for (int i = 1; i<=n; i++){
        int flag = 0;
        for (int j = 0; j<n-1; j++){
            if (arr[j]==i){
                flag = 1;
                break;
            }
        }
        if (flag==0){
            cout<<i;
        }
    }
    return 0;
}

//Better

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int hash[n+1]={0};
    int arr[n-1];
    for (int i=0; i<n-1; i++){
        cin>>arr[i];
        hash[arr[i]]++;
    }
    for (int i=1; i<=n; i++){
        if (hash[i]==0){
            cout<<i;
            break;
        }
    }

    return 0;
}

//Optimal - 1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for (int i =0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for (auto it : arr){
        sum+=it;
    }
    int real_sum=(n*(n+1))/2;
    cout<<real_sum-sum;
    return 0;
}

//Optimal - 2 (using XOR)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for (int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    int xor1=0;
    int xor2=0;
    int N=n-1;
    for (int i =0; i<N; i++){
        xor1=xor1^arr[i];
        xor2=xor2^(i+1);
    }
    xor2=xor2^n;
    cout<< (xor1^xor2);


    return 0;
}

