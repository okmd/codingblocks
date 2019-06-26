#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
	
	int k,a,b;
	string s;
	cin>>k;
	cin.ignore();
	getline(cin,s);
	a = count(s.begin(), s.end(), 'a');
	b = count(s.begin(), s.end(), 'b');
	cout<<max(a,b)+k<<endl;	
	return 0;
}

/*

not complete

*/
