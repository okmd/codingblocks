#include <iostream>
using namespace std;

// find 1's in binary representation
// using bitwise operator

int main(){
	int n, setbits=0;
	cout<<"Enter number: ";
	cin>>n;
	while(n){
		setbits += n&1;
		n>>=1;
	}
	cout<<"Number of setbits: "<<setbits<<endl;
	return 0;
}

/*
Input: 
	Enter number: 7
Output:	
	Number of setbits: 3

*/