#include <iostream>
#include <cstring>
using namespace std;
#define ll long long int
#define limit 100000005 

int prime[limit], sieve[limit];
void makeSieve(){
	memset(sieve, 0, sizeof sieve); // 0, not prime
	sieve[2] = 1; // only even prime
	
	for(ll i=3; i<=limit;i+=2)
		sieve[i] = 1; //all odd are eligible to be prime

	for(ll i=3;i<=limit;i+=2){
		if(sieve[i]){//prime, mark all multiple are not prime.
			for(ll j=i*i; j<=limit; j+=2*i) //adding odd to add gives even, and for even we need not to check. so odd + even = odd
				sieve[j] = 0;// not prime	// as for i=3, j=9 then j=12 then j=15 than j=18
		}								// so we are shifting to only odd numbers as even are already marked as non prime.
	}
	// copy only prime to prime array
	for(ll i=0, j=0; i<limit;i++){
		if(sieve[i])
			prime[j++] = i;
	}
}
ll nthPrime(ll n){
	return prime[n-1];
}

int main(){
	int t, n;
	cin>>t;
	makeSieve();
	while(t--){
		cin>>n;
		cout<<nthPrime(n)<<endl;
	}
	return 0;
}

/*
Probelm: find nth prime.


*/