#include<bits/stdc++.h>
#define LIMIT 100
using namespace std;
// bottom up
int minPath(int arr[][LIMIT], int row, int col){
    int dp[LIMIT][LIMIT]={};
    dp[0][0] = arr[0][0];// initial is same as given path
    // fill the first row
    for(int c=1; c<col; c++)
        dp[0][c] = dp[0][c-1] + arr[0][c];
    // first col
    for(int r=1; r<row; r++)
        dp[r][0] = dp[0][r-1] + arr[r][0];
    // remaining dp except 1st row and column
    for(int r=1; r<row; r++){
        for(int c=1; c<col; c++){
            dp[r][c] = min(
                dp[r-1][c], // upward apth
                dp[r][c-1] // right path
            ) + arr[r][c];// current length
        }
    }
    // print dp
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++)
            cout<<setw(3)<<dp[i][j]<<" ";
        cout<<endl;
    }

    return dp[row-1][col-1]; // destination
}

int main(){
    int r, c, arr[LIMIT][LIMIT];
    cin>>r>>c;
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>arr[i][j];
    int ans = minPath(arr, r, c);
    cout<<"Minimum path: "<<ans<<endl;
    return 0;
}
/*
The dp can be applied only when there is
    -> over lapping subproblem (like in factorial or fibonacci)
    -> optimal substructure

Optimal substructure:
to get the path between min(A, B)
this in between path shoul also be minimum
min(A, C) + min(C, B) = min(A, B)
Note: there is no backward path, you can go only forward(right, down).

Input: 
1 2 3
4 8 2
1 5 3
Output: min path from 1(00) to 3(22) is 11:
  1   3   6 
  5  11   8 
  4   9  11 
Minimum path: 11
*/