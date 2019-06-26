#include<iostream>
#include<cstring>
using namespace std;
bool isPrime(int n){
	int i=2;
	if(n<=1)
		return false;
	
	while(i*i<=n){
		if(n%i++==0)
			return false;
	}
	return true;
}

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;

	// generating all sub-sequence
	
	return 0;
}

/*

not complete

*/
