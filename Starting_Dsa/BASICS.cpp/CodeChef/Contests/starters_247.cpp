//Square Paper

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	int l = min(a,b);
	cout<<l*l;

}


//Conveyor Belt

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,p;
	    cin>>n>>p;
	    string s;
	    cin.ignore();
	    getline(cin, s);
	    int stepsRight = 0;
	    int stepsLeft = 0;
	    for (int i=p-1; i<n; i++){
	        if (s[i]!='R'){
	            stepsRight++;
	        }
	    }
	    for (int i=p-1; i>=0; i--){
	        if (s[i]!='L'){
	            stepsLeft++;
	        }
	    }
	    int result = min(stepsLeft, stepsRight);
	    cout<<result<<endl;
	}

}
//Alternating Array

 #include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int p1 = 0; //pattern 1 --> Even, Odd, Even...
	    int p2 = 0; //pattern 2 --> Odd, even, odd...
	    int x;
	    cin>>x;
	    vector<int> arr(x);
	    for (int i=0; i<x; i++){
	        cin>>arr[i];
	    }
	    for (int i=0; i<x; i++){
	        //Pattern 1 check
	        if (i%2==0){
	            if (arr[i]%2!=0){
	                p1++;
	            }
	        }else{
	            if (arr[i]%2==0){
	                p1++;
	            }
	        }
	        //pattern 2 check
	        if (i%2==0){
	            if (arr[i]%2==0){
	                p2++;
	            }
	        }else{
	            if (arr[i]%2!=0){
	                p2++;
	            }
	        }
	    }
	    cout<<min(p1, p2)<<endl;
	}

}