#include <iostream>
#include <cstring>
using namespace std;

void move(string a, int n){
	if(n==a.length()) return ;
	if(a[n]!='x') cout<<a[n];
	move(a, n+1);
	if(a[n]=='x') cout<<a[n];
}

int main(){
	string s;
	cin>>s;
	move(s, 0);
	cout<<endl;
	return 0;
}

/*

Input:
axbxa
Output:
abaxx

*/