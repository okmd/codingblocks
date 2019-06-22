#include <iostream>
using namespace std;
/*

nCr = n!/r!*(n-r)!

this program will work for small numbers only.

*/

int factorial(int n){
	int ans = 1;
	for(int i=1;i<=n;i++)
		ans *= i;
	return ans;
}

int nCr(int n, int r){
	// NCR
	int nf, rf, nrf, ans;
	nf = factorial(n);
	rf = factorial(r);
	nrf = factorial(n-r);
	ans = nf/(rf*nrf);
	return ans;

}

int main(){
	int n, r;
	cin>>n>>r;
	cout<<nCr(n,r)<<endl;
	return 0;
}

/*

factorial[n,ans,i]
------------------
nCr[n,r,nf,rf,nrf]
----------
main[n,r]

*/