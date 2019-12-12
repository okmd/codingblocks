#include<bits/stdc++.h>
#define LIMIT 10000
using namespace std;

// memoization or top-down dp
int memo[LIMIT];// to store the result

int fib(int n){
	if(n==0 or n==1) return n;
	return fib(n-1) + fib(n-2);
}

int fibDp(int n){
	if(n==0 or n==1) return n;
	if(memo[n]!=-1) return memo[n];
	int ans = fibDp(n-1) + fibDp(n-2);
	memo[n] = ans;
	return ans;
}

int main(){
	int n;
	cin>>n;
	// -1 is not fib number to represent in array as empty
	for(int i=0; i<LIMIT; i++){
		memo[i]=-1;
	}
	//cout<<"Nth fibonacci number(0-based index): "<<fib(n)<<endl;
	cout<<"Nth fibonacci number(0-based index): "<<fibDp(n)<<endl;
	return 0;
}
/*
THOSE WHO DO NOT REMEMBER YOUR PAST ARE CONDEMNED TO REPEAT

Complexity : 2^0 + 2^1 + .... = O(2^n) without dp.
there are lot of repeatition. 0 1 1 2 3
With dp: O(n)
*/