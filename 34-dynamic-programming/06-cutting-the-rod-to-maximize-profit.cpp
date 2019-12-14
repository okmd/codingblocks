#include<bits/stdc++.h>
#define LIMIT 100
using namespace std;

int memo[LIMIT]; // maximum profit of given length

int profit(int arr[], int n){
    if(n==0) return 0; // total length is 0
    if(memo[n]!=-1) return memo[n]; // already computed
    int best = 0;
    for(int len=1; len<=n; len++){
        int net_profit = arr[len] + profit(arr, n-len);
        best = max(best, net_profit);
    }
    memo[n] = best;
    return best;
}
// bottom up
int profitBUP(int arr[], int n){
    int dp[LIMIT] ={};
    for(int len=1; len<=n; len++){
        int best = 0;
        for(int cut =1; cut<=len; cut++){ // max profit of cut
            best = max(best, arr[cut] + dp[len-cut]);
        }
        dp[len] = best;
    }
    return dp[n];
}

int main(){
    int price[LIMIT]; // price of each length of rod to be sold
    int total_len;
    cin>>total_len;
    for(int piece=1; piece<=total_len; piece++){
        cin>>price[piece];
    }
    memset(memo, -1, sizeof(memo));
    int ans = profit(price, total_len);
    cout<<"Maximum profit(top down): "<<ans<<endl;
    ans = profitBUP(price, total_len);
    cout<<"Maximum profit(bottom up): "<<ans<<endl;

    return 0;
}
/*
Given a rod of length n and you need to find the maximum profit by selling the rod
you can sell whole or in pecies.
e. g
N=4 <- length of the given rod
the price of each piece is also given.
 
Note: use opverlapping subproblem and apply optimal sub-structure property.
Complexity (without DP): O(4^n)
with DP: O(n^2) as to fill the ith box the cost is i so. 1+ 2+ 3+ .. = O(n^2)

Input: 
4
2 3 2 5
Output:
Maximum profit(top down): 8
Maximum profit(bottom up): 8


*/