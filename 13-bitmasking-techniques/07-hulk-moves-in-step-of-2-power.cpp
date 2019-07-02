#include<iostream>
#include <cstring>
using namespace std;
int setBits(int n){
	int ans =0;
	while(n){
		ans++;
		n = n&(n-1);
	}
	return ans;
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<setBits(n)<<endl;
	}
	return 0;
}

/*
Problem: Find minimum no of moves to reach destination.
hulk at 0 and want to reach 13
one of possible moves
 4+4+4+1 etc.
 but minimum is
 8+4+1 = 13

 it is nothing but the number of set bits.

*/