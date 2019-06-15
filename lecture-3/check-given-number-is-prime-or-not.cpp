#include <iostream>
using namespace std;
int main(){
	int n,i=2;
	cout<<"Enter Number: ";
	cin>>n;
	while(i<n){
		if(n%i==0){
			cout<<n<<" is non-prime\n";
			return 0;
		}
		i++;
	}
	cout<<n<<" is prime\n";
	
	// Optimized and efficient code
	/* 
	while(i*i<n){
		if(n%i==0){
			cout<<n<<" is not prime.\n";
			return 0;
		}
		i++;
	}
	cout<<n<<" is prime.\n";
	*/
	return 0;
}