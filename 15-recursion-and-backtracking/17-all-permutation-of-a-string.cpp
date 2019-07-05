#include <iostream>
using namespace std;

void permute(char in[], int i){
	// base case
	if(in[i]=='\0'){
		cout<<in<<" ";
		return;
	}
	// recursive case
	for(int j=i; in[j]!='\0'; j++){
		swap(in[i], in[j]); // going down
		permute(in, i+1);
		swap(in[i], in[j]); // going up, BACKTRACKING
		// re-storing the original array
	}

}
int main(){
	char in[100];
	cin>>in;
	permute(in,0);
	cout<<endl;
	return 0;
}

/*
Problem: Given a string find all permutations of a string using recursion.

total permutation = n!; where n is the length of string.

Input:
abc
Output:
abc
acb
bac
bca
cab
cba
*/
