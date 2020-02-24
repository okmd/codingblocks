#include<bits/stdc++.h>
using namespace std;
int dp[100][100];

int lcs(char x[], char y[]){
    int m = strlen(x);
    int n = strlen(y);
    //base case
    for(int i=0; i<=m; i++) dp[i][0]=0;
    for(int i=0; i<=n; i++) dp[0][i]=0;
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

void print_lcs(char x[], char y[]){
    int m = strlen(x);
    int n = strlen(y);
    char ans[100];
    int k = 0; 
    cout<<"Index[x, y]: ";
    for(int i=m; i>=0;){
        for(int j=n; j>=0;){
            if(dp[i-1][j]==dp[i][j-1] and dp[i-1][j-1]!=dp[i][j]){
                ans[k++]=x[i-1];
                cout<<"["<<(i-1)<<", "<<(j-1)<<"]";
                i--;
                j--;
            }else{
                if(dp[i-1][j] < dp[i][j-1]){
                    j--;
                }else{
                    i--;
                }
            }
        }
    }
    ans[k]='\0';
    cout<<"\nSubsequence: ";
    for(int i=strlen(ans)-1; i>=0; i--){
        cout<<ans[i];
    }
    cout<<endl;
}
int main(){
    char a[100], b[100];
    cin>>a>>b;
    cout<<"Length of longest common subsequence: "<<lcs(a, b)<<endl;
    print_lcs(a, b);
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
# string
aggtab
gxtxayb
gtab
*/