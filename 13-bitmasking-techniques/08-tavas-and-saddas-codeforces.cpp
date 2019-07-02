#include <iostream>
#include <cstring>
using namespace std;
#define ll long long int
int main(){
	char a[20];
	cin>>a;

	int len = strlen(a);
	ll ans = 0;
	ans = (1<<len) - 2; // 2^n - 2 possile numbers for n-1 digits using GP.
	
	// 	add contribution of n-digit numbers
	// iterate over the number from uint place,
	// add contribution of seven

	for(int i= len-1, pos =0; i>=0; i--, pos++){
		if(a[i]=='7')
			ans += (1<<pos);
	}

	cout<<ans+1<<endl;

	return 0;
}