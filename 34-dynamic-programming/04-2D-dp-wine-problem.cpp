#include<bits/stdc++.h>
#define LIMIT 100
using namespace std;

int memo[LIMIT][LIMIT]; // upper triangular matrix will be filled
// top down or memoization
int profitDP(int arr[], int be, int en, int year){ //O(n) = no of boxes
	if(be>en) return 0;
    if(memo[be][en]!=-1) return memo[be][en];
	int q1 = arr[be] * year + profitDP(arr, be+1, en, year+1);
	int q2 = arr[en] * year + profitDP(arr, be, en-1, year+1);
    int ans = max(q1, q2);
    memo[be][en] = ans;
	return ans;
}
// bottom up 
int profitBUP(int arr[], int n){
    int dp[LIMIT][LIMIT]={};//fill with 0
    int year=n;
    // for len 1 i.e single bootle
    for(int len=0; len<n; len++) // nth year
        dp[len][len] = year*arr[len]; // fill diagonal of dp, when only single bottle is present
    year--;
    // for ramaining bottle, i.e len >=2
    for(int len=2; len<=n; len++){
        int be = 0;
        int en = n - len;
        while(be<=en){
            int end_window = be + len - 1;
            dp[be][end_window] = max(
                year*arr[be] + dp[be+1][end_window],
                year*arr[end_window] + dp[be][end_window-1]
            );
            be++;
        }
        year--;
    } 
    // print dp
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<setw(3)<<dp[i][j]<<" "; // iomanip
        }
        cout<<endl;
    }
    return dp[0][n-1]; // 1st row and last column
    // max profit by selling from bottle 1 to n

}
int profit(int arr[], int be, int en, int year){ // O(2^n)
	if(be>en) return 0;
	int q1 = arr[be] * year + profit(arr, be+1, en, year+1);
	int q2 = arr[en] * year + profit(arr, be, en-1, year+1);
	return max(q1, q2);
}

int main(){
	int n, arr[100];
	cin>>n;
	for(int i=0; i<n; i++) cin>>arr[i];
    memset(memo, -1, sizeof(memo));
	cout<<"Maximum profit is: "<<profit(arr, 0, n-1, 1)<<endl;
    cout<<"Maximum profit(top down) is: "<<profitDP(arr, 0, n-1, 1)<<endl;
    int ans = profitBUP(arr, n);
    cout<<"Maximum profit(bottom up) is: "<<ans<<endl;
	return 0;
}
/*
Given a row of bottles
2 3 5 1 4 <- price
you can only sell bottle on at a year
only extrem end bottle can be sold
at each passing year add the price to itself i.e total price*year.
Method: pick the extreme element and calculate max profit for that
and choose to sell for max profit.
It looks like greedy but isn't.

Input: 
4
1 4 2 3
Output:
Maximum profit is: 29
Maximum profit(top down) is: 29
  4  19  24  29 
  0  16  22  28 
  0   0   8  18 
  0   0   0  12 
Maximum profit(bottom up) is: 29

Input: 
5
2 3 5 1 4
Output:
Maximum profit is: 50
Maximum profit(top down) is: 50
 10  23  43  45  50 
  0  15  37  40  48 
  0   0  25  29  41 
  0   0   0   5  24 
  0   0   0   0  20 
Maximum profit(bottom up) is: 50
*/