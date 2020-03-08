#include<bits/stdc++.h>
using namespace std;
int lcs(char x[], char y[]){
    int m = strlen(x);
    int n = strlen(y);
    int dp[100][100];
    memset(dp, 0, sizeof(dp));
    //base case
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            int q = 0;
            if(x[i-1]==y[j-1]){
                q = 1+dp[i-1][j-1];
            }else{
                q = max(dp[i-1][j], dp[i][j-1]);
            }
            dp[i][j]=q;
        }
    }
    return dp[m][n]; // store the answer of lcs of both the string
}
int main(){
    char a[100], b[100];
    cin>>a>>b;
    cout<<lcs(a, b)<<endl;
    return 0;
}

/*
Maintain a 2d dp array to maintain a length of common subsequence of both the strings.
aggtab
gxtxtab
4
nematode
empty
3
*/