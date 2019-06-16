#include <iostream>
using namespace std;

int main(){

	int n,i=1;
	cout<<"Enter squared number: ";
	cin>>n;
	while(i<n){
		if(i*i==n){
			cout<<n<<" is perfect square of "<<i<<".\n";
		}
		i++;
	}
	cout<<n<<" is not a perfect square\n";
	return 0;
}

/*
Input:
	Enter squared number: 25
Output:
	25 is perfect square of 5.


Input:
	Enter squared number: 3
Output:
	25 is not a perfect square.

*/