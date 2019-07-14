#include <bits/stdc++.h>
using namespace std;
int c; // atleat one zero sum for null subset
void subset(int s[], int n, int sum, int target, int size){
	if(n==size){
		if(sum == target) c++;
		return;
	}
	subset(s, n+1, sum, target, size);
	sum+=s[n];
	subset(s, n+1, sum, target, size);
}	

int main(){
	int t,n,target=0;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		// process
		c=0;
		subset(a, 0, 0, target, n);
		if(c>1)
			cout<<"Yes\n";
		else
			cout<<"No\n";

	}
	return 0;
}

/*
Problem: is subset sum is zero. Find the subset which has sum equal to k.
Input:
1
4
1 2 3 -3
Output:
Yes

*/
