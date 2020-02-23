#include<bits/stdc++.h>
using namespace std;

int dp[120];
int lis(int arr[], int n){
    // best case
    for(int i=0; i<n; i++) dp[i]=1; // each indidual has 1 length lis.
    int best = -1;
    for(int i=1; i<n; ++i){
        for(int j=0; j<i; j++){
            if(arr[j] <= arr[i]){
                // contribte to lis
                int curlen = 1 + dp[j];
                dp[i] = max(curlen, dp[i]);
            }
        }
        best = max(best, dp[i]);
    }
    return best;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"LIS "<<lis(arr, n)<<endl;
    for(int i=0; i<n; i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*
Input: List of number. 
Output: Non-decreasing list.
E.g  - 10 22 9 33 21 50 41 60 80 6
Ans -  10 22 33 41 60 80 -> 6 is lis
Note: Maintain array of LIS length that ends at i. and maximum of it is LIS.
*/