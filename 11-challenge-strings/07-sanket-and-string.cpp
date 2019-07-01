#include<bits/stdc++.h>
using namespace std;
bool isEqualCount(string s){
	int a=0,b=0;
	// frequency of 1 and 2;
	for(int i=0;i<s.length();i++)
		(s[i]=='a')? a++ : b++;
	return a==b;
}
int main(){
	
	int k,ms=0;
	string s;
	cin>>k>>s;
	for(int i=0;i<s.length();i+=2){
		if(isEqualCount(s.substr(i)))
		cout<<<<endl;
	}
	return 0;
}

/*

It is given no. of a's is equal to b's.
swap either a to b or b to a.
so that substring become maximum in length
which contains of a's or b's.
only k swaps are possible.

*/
