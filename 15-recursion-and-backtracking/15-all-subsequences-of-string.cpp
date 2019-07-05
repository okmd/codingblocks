#include <iostream>
using namespace std;

void substring(char in[], char out[], int i, int j){
	// base case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<", "<<endl;
		return;
	}
	//recursion case
	// include current char
	out[j] = in[i];
	substring(in, out, i+1, j+1);
	// not include current char
	substring(in, out, i+1, j);
}

int main(){
	char in[100];
	char out[100];
	cin>>in;
	substring(in,out,0,0);
	cout<<endl;
	return 0;
}

/*
Problem: Given a string find all subsequences of a string using recursion.

total substring = 2^n;
total non-empty substring = 2^n - 1;

It is most common question asked in interview.

Input:
abc
Output:
abc
ab
ac
a
bc
b
c
""

*/
