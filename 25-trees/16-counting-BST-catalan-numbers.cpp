#include <bits/stdc++.h>
using namespace std;

// CodeChef: 
// Important: Adobe, Amazon, Microsoft etc.
int catalan(int n){ // no. of bst possible from n nodes.
    if(n==0) return 1;
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans+= catalan(i-1)*catalan(n-i);
    }
    return ans;
}
// using DP
int dp[100]={0};
int catalanDP(int n){
    if(n==0) return 1;
    if(dp[n]!=0) return dp[n]; // return already calculated result.
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans+= catalan(i-1)*catalan(n-i);
    }
    dp[n] = ans; // save each calculated ans. as there is overlapping sub-problems.
    return ans;
}

int factorial(int n){
    if(n==0 or n==1) return 1;
    return n*factorial(n-1);
}
int catalanFormula(int n){
    int r = factorial(n);
    int nume = factorial(2*n)/(r*r);
    int deno = n+1; 
    return nume/deno;
}
int main(){
    int n;
    cin>>n;
    cout<<catalan(n)<<endl;
    cout<<catalanDP(n)<<endl;
    cout<<catalanFormula(n);
    return 0;
}
/*
Given: 1 to N nodes.
count no. of ways to construct BST.
*/