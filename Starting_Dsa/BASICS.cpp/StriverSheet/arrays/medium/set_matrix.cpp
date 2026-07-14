// #include<bits/stdc++.h>
// using namespace std;

////Brute --> o(n^3)

// void markrow(int matrix[4][4], int i){
//     for (int j = 0; j<4; j++){
//         if (matrix[i][j]!=0){
//             matrix[i][j]=-1;
//         }
//     }
// }

// void markcol(int matrix[4][4], int j){
//     for (int i=0; i<4; i++){
//         if (matrix[i][j]!=0){
//             matrix[i][j]=-1;
//         }
//     }
// }

// int main(){
//     int matrix[4][4]={{1,1,0,1},{1,1,1,1},{0,1,1,1},{1,1,1,1}};
//     for (int i=0; i<4; i++){
//         for (int j=0; j<4; j++){
//             if (matrix[i][j]==0){
//                 markrow(matrix, i);
//                 markcol(matrix, j);
//             }
//         }
//     }
//     for (int i=0; i<4; i++){
//         for (int j=0; j<4; j++){
//             if (matrix[i][j]==-1){
//                 matrix[i][j]=0;
//             }
//         }
//     }
//     for (int i=0; i<4; i++){
//         for (int j=0; j<4; j++){
//             cout<<matrix[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }

//Better --> tc = o(n^2) , sc = o(mn)

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int matrix[4][4]={{1,1,0,1},{1,1,1,1},{0,1,1,1},{1,1,1,1}};
//     int col[4]={0};
//     int row[4]={0};
//     for (int i=0; i<4; i++){
//         for (int j=0; j<4; j++){
//             if (matrix[i][j]==0){
//                 row[i]=1;
//                 col[j]=1;
//             }
//         }
//     }
//     for (int i=0; i<4; i++){
//         for (int j=0; j<4; j++){
//             if (row[i] || col[j]){
//                 matrix[i][j]=0;
//             }
//         }
//     }
//     for (int i=0; i<4; i++){
//         for (int j=0; j<4; j++){
//             cout<<matrix[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }

//Optimal --> tc = o(n^2), sp = o(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int matrix[4][4]={{1,1,0,1},{1,1,1,1},{0,1,1,1},{1,1,1,1}};
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            if (matrix[i][j]==0){
                //row check 
                matrix[i][0];
                //col check
                matrix[0][j];
            }
        }
    }
    for (int i=3; i>=1; i--){
        for (int j=3; j>=1; j--){
            if (matrix[0][j]==0 || matrix[i][0]){
                matrix[i][j]=0;
            }
        }
    }
    for (int i)
    return 0;
}