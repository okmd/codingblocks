#include <iostream>
#include <cstring>
using namespace std;

void subsequence(string s, string o, int n){
	if(n==s.length()){
		cout<<o<<" ";
		o.erase(o.begin(), o.end());
		return ;
	}
	subsequence(s, o, n+1);
	o.append(1, s[n]);
	subsequence(s, o, n+1);
}

int main(){
	string s,o;
	cin>>s;
	subsequence(s,o,0);
	cout<<endl<<(1<<s.length())<<endl;
	return 0;
}

/*
Input:
abcd
Output:
 d c cd b bd bc bcd a ad ac acd ab abd abc abcd 
16

recursion tree
				abcd
				"" a
			"" b
			..

*/