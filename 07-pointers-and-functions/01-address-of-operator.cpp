#include <iostream>
using namespace std;

int main(){
	int a=10;
	cout<<&a<<endl;
	float b=10.0;
	cout<<&b<<endl;
	char c='A';
	cout<<&c<<endl;// for char, cout just print the char when we pass the address, with new line char
	// convert char* to void*
	cout<<(void *)&c<<endl;// when cout don't now about the type of data then it just print the address

	return 0;
}