#include<iostream>
using namespace std;

int main(){
    system("cls");
    int numS[5]={22,31,5,26,76};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int i;
    for(i=0;i<5;i++){
        smallest = min(numS[i],smallest);
        largest = max(numS[i],largest);
    }
    cout<<"The smallest value in the array is = "<<smallest<<endl;
    cout<<"The largest value in the array is = "<<largest;
    return 0;
}