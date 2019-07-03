#include <iostream>
#define ll long long int
using namespace std;
int power(ll n, ll p, ll m){
	if(p==1) return n%m;
	return ((n%m)*power(n, p-1,m))%m;
}
int main(){
	ll a, b, c;
	cin>>a>>b>>c;
	cout<<power(a,b,c)<<endl;
	return 0;
}

/*

(a^b)modc
power not xor

*/