#include<bits/stdc++.h>
#define ll long long int
#define limit 200
using namespace std;

ll dp[limit][limit][limit];
void print_dp(int m, int n, int o){
    for(int i=0; i<m; i++){
        cout<<i<<"th channel"<<endl;
        for(int j=0; j<n; j++){
            for(int k=0; k<o; k++){
                cout<<setw(2)<<dp[i][j][k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
int LCS(char a[], char b[], char c[]){
    ll m = strlen(a);
    ll n = strlen(b);
    ll o = strlen(c);
    //base case
    for(int i=0; i<=m; i++) dp[i][0][0]=0;
    for(int i=0; i<=n; i++) dp[0][i][0]=0;
    for(int i=0; i<=o; i++) dp[0][0][i]=0;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            for(int k=1; k<=o; k++){
                int q = 0;
                if(a[i-1]==b[j-1] and b[j-1]==c[k-1]){
                    q = 1+dp[i-1][j-1][k-1];
                }else{
                    q = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
                }
                dp[i][j][k]=q;
            }
        }
    }
    return dp[m][n][o]; // store the answer of lcs of both the string
}
int main(){
    char a[limit], b[limit], c[limit];
    cin>>a>>b>>c;
    // ll m = strlen(a);
    // ll n = strlen(b);
    // ll o = strlen(c);
    cout<<LCS(a,b,c)<<endl;
    // print_dp(m,n,o);
    cout<<endl;
    return 0;
}