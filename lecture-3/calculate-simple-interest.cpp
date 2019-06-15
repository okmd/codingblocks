#include <iostream>
using namespace std;
int main(){
	int p,r,t;
	cout<<"Enter Principal Amount: ";
	cin>>p;
	cout<<"Enter Rate: ";
	cin>>r;
	cout<<"Enter Time: ";
	cin>>t;
	cout<<"Simple Interest is: "<<p*r*t/100.0<<endl;
	return 0;
}