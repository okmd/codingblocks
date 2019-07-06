#include <iostream>
#include <bitset> // help to creare boolean array(1bit), while normal bool takes (1Byte)
using namespace std;

bitset<100> col, d1, d2;

void solve(int r, int n, int &ans){
	if(r==n){
		ans++;
		return;
	}
	for(int c=0; c<n; c++){
		if(!col[c] and !d1[r-c+n-1] and !d2[r+c]){ // if not in col and both diagonal
			col[c] = d1[r-c+n-1] = d2[r+c] = 1;
			solve(r+1, n, ans); // solve for next row
			col[c] = d1[r-c+n-1] = d2[r+c] = 0; // backtrack, if not a valid configuration
		}
	}
}
int main(){
	int n, ans=0;
	cin>>n;
	solve(0,n,ans);
	cout<<ans<<endl;
	return 0;
}

/*
Problem: N-Queen Problem using recursion and backtracking.
Given NxN chess board and we need to place N-Queens in the board
such that no queen cross each other, horizontally, vertically and diagonally.
There may be number of solutions/configurations.

Result: 4,2; 8,92; 13,73712;

Note: for 2 and 3 no configuration possible.
*/
