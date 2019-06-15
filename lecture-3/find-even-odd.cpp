#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	if(n&1)
		cout<<"Odd Number\n";
	else
		cout<<"Even Number\n";
	return 0;
}