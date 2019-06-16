#include <iostream>
using namespace std;

int main(){

	float n,i=0,p=0,precision;
	float inc=1;
	cout<<"Enter number: ";
	cin>>n;
	cout<<"Enter precision: ";
	cin>>precision;
	while(p++<=precision){
		while(i*i<=n){
			i+=inc;
		}
		i-=inc;
		inc/=10;
	}
	cout<<"Square root of "<<n<<" is "<<i<<endl;
	return 0;
}

/*
Input:
	Enter number: 45
	Enter precision: 4
Output:
	Square root of 45 is 6.7082

*/