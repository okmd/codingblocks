#include<bits/stdc++.h>
#define LIMIT 10000
const int inf = (int)1e9;
using namespace std;

// memoization or top-down dp
int memo[LIMIT];// to store the result

// top down or memoization
int reduce(int n){
	if(n==1) return 0;
	if(memo[n]!=-1) return memo[n];
	int q1,q2,q3;
	q1=q2=q3=inf;
	if(n%3==0)
		q1 = 1+ reduce(n/3);
	if(n%2==0)
		q2 = 1+ reduce(n/2);
	q3 = 1+ reduce(n-1); // divide by 1
	return min(q1, min(q2, q3));

}
int reduceDP(int n){
	int dp[LIMIT]={};
	// base case
	dp[0]=0;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1; 
	// bottom up
	for(int i=4; i<=n; i++){
		int q1,q2,q3;
		q1=q2=q3=inf;
		if(n%3==0)
		q1 = 1+ reduce(n/3);
		if(n%2==0)
			q2 = 1+ reduce(n/2);
		q3 = 1+ reduce(n-1); // divide by 1
		dp[i] =  min(q1, min(q2, q3));
	}

	return dp[n];

}

int main(){
	int n;
	cin>>n;
	// -1 is not fib number to represent in array as empty
	fill(memo, memo+n+1, -1); // inside <algorithm>, fill memo array to -1
	cout<<"Minimum number of divisions are "<<reduce(n)<<" to divide "<<n<<endl;
	cout<<"Minimum number of divisions are "<<reduceDP(n)<<" to divide "<<n<<endl;
	return 0;
}
/*
Reduce the number to one in minimum number of steps.
can only divide by 3,2,1
e.g 21
21->7->6->3->2->1
divide by 3, -1, 2, -1, 2
e.g 14
14->13 .. by -1
14->7 .. by 2

Don't be greedy try all the possible result and get min ans.
possible method is memoization as there is overlapping subproblem.
*/