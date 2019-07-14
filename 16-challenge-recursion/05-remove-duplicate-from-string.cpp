#include <iostream>
#include <cstring>
using namespace std;

void duplicate(char a[], int n){
	if(n==0){
		cout<<a[n];
	 	return;
	}

	duplicate(a, n-1);

	if(a[n-1] != a[n])
		cout<<a[n];
}

int main(){
	char in[100];
	cin>>in;
	int n = strlen(in);
	duplicate(in, n-1);
	cout<<endl;
	return 0;
}

/*

Input: 	aabccba
Output:	abcba
Input: 	aaabbbcccc
Output:	abc

*/