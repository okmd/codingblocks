#include<iostream>
using namespace std;
int setBits(int n){// O(no. of all bits)
	// positive n
	int count = 0;
	while(n){
		count += n&1;
		n>>=1;
	}
	return count;
}

int setBitsEfficient(int n){ // O(no. of set bits only)
	int count = 0;
	while(n){
		count++;
		n = n&(n-1);
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	cout<<setBits(n)<<endl;
	cout<<setBitsEfficient(n)<<endl;
	return 0;
}

/*
Problem: calculate number of 1's in nunmber.
Complexity: O(number of bits).

*/