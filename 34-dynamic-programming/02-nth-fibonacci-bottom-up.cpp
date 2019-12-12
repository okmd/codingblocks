#include<bits/stdc++.h>
#define LIMIT 10000
using namespace std;

// pure dp or bottom up dp
int fib(int n){
	int dp[LIMIT]={};
	dp[0]=0;
	dp[1]=1;
	for(int i=2; i<=n; i++){
		dp[i] = dp[i-1]+dp[i-2];
	}
	return dp[n];
}

int main(){
	int n;
	cin>>n;
	cout<<"Nth fibonacci number(0-based index): "<<fib(n)<<endl;
	return 0;
}
/*
Memoization: top-down, uses stack to maintain the activation record.
calculate the answer of smaller problem then build the larger one.
Pure dp : bottom-up
calculate smaller problem then large without recursion but with array.

*/