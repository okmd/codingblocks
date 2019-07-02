#include <iostream>
using namespace std;
int sieve_eratosthenes(int n){
	int arr[n+1]={0}; // zero means prime 
	arr[0] = arr[1] = 1; // not prime
	for(int i=2;i<=n;i++){
		if(arr[i]==0){//prime
			for(int j=2*i; j<=n; j+=i)
				arr[j] = 1;// not prime
		}
	}
	for(int i=0;i<=n;i++){
		if(arr[i]==0)//prime
			cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
// optimization 1
int sieve_eratosthenes_optimization(int n){ // odd value only and start from i^2
	int arr[n+1]={0}; // zero means not prime 
	arr[2] = 1; // prime
	
	for(int i=3; i<=n;i+=2)
		arr[i] = 1; //all odd are prime and even are not prime

	for(int i=3;i<=n;i+=2){
		if(arr[i]){//prime, mark all multiple are not prime.
			for(int j=i*i; j<=n; j+=2*i) //adding odd to add gives even, and for even we need not to check. so odd + even = odd
				arr[j] = 0;// not prime	// as for i=3, j=9 then j=12 then j=15 than j=18
		}								// so we are shifting to only odd numbers as even are already marked as non prime.
	}
	
	// prime
	for(int i=0;i<=n;i++){
		if(arr[i])//prime
			cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}

int main(){
	// prime upto n
	int n;
	cin>>n;
	sieve_eratosthenes(n);
	sieve_eratosthenes_optimization(n);
	return 0;
}

/*
Complexity: O(nlog(logn)) = O(n)



*/