#include<bits/stdc++.h>
using namespace std;

int dp[100][2];
//top down
int bs(int n, int last_digit){
    if(dp[n][last_digit]) return dp[n][last_digit];
    if(last_digit==0){
        dp[n][0] = bs(n-1, 0) + bs(n-1, 1);
    }
    else{
        dp[n][1] = bs(n-1, 0);
    }
    return dp[n][last_digit];
}
int main(){
    dp[1][0]=dp[1][1]=1;
    int n;
    cin>>n;
    cout<<bs(n,0)+bs(n,1);
    return 0;
}

/*
Number of binary string of length N with non-consicutive 1's.
Method 1: Topdown Dp
    if ends with 0 -> add 0 for next length string
    if ends with 1 -> add 1 to prev string ends with 0
    repeat the process for N length string.
Method 2: Bottomup Dp
    Maintain as 2d dp and calculate the value one by one and so on.
Method 3: Fibonacci sequence
    N=1 -> 2 i.e 0, 1
    N=2 -> 3 i.e 00, 01, 10
    N=3 -> 5
    N=4 -> 8


*/