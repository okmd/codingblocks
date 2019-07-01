#include<iostream>
#include<cstring>
using namespace std;

void filterChar(char *a, int num){
	// a="abc", num=6, --output should be "bc" as 6 is 110
	int i=0;
	while(num){
		(num&1) ? cout<<a[i] : cout<<""; // last digit for 1st of char
		i++;
		num = num>>1;
	}
	cout<<endl;

}

void generateSubsequence(char *a){
	// generate a range from 0 to 2^n -1
	int n = strlen(a);
	int range = (1<<n) - 1;
	for(int i=1; i<=range; i++){ // i=0 for null string
		filterChar(a,i);
	}
}
int main(){
	char a[1000];
	cin>>a;
	generateSubsequence(a);
	return 0;
}

/*
Problem: Geneare all subsequence of a string.
e.g.

input: abc
len = 3
2^len - 1 = 7
so,
dec, bin, subsequence filtered
------------------
0	000		""
1	001		a
2	010		b
3	011		ab
4	100		c
5	101		ac
6	110		bc
7	111		abc

Note: char left to right and  binary right to left.

Time complexity: O(n*2^n)

*/