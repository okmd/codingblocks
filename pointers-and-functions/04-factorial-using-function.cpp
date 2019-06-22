#include <iostream>
using namespace std;
/*

nCr = n!/r!*(n-r)!


*/

int factorial(int n){
	int ans = 1;
	for(int i=1;i<=n;i++)
		ans *= i;
	return ans;
}

int main(){
	int n, r, nf, rf, nrf, ans;
	cin>>n>>r;
	nf = factorial(n);
	rf = factorial(r);
	nrf = factorial(n-r);
	ans = nf/(rf*nrf);
	cout<<ans<<endl;
	return 0;
}