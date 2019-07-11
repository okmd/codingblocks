#include <iostream>
using namespace std;
int sToI(string s,int n){
	if(n==1) return s[0]-'0';
	return sToI(s,n-1)*10 + s[n-1]-'0';
}

int main(){
	string s;
	cin>>s;
	cout<<sToI(s, s.length())<<endl;
	return 0;
}

/*

Input: 1234
Output: 1234

*/