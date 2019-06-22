#include <iostream>
using namespace std;

int main(){
	int a=10;
	int *aptr = &a;
	cout<<&a<<endl; // address of a
	cout<<aptr<<endl; // address of a, stored in aptr 
	// both are same
	// again a pointer can be re-assign to some other address

	// char *cptr;
	// cptr = &a; // it is not possible will give error
	// cout<<cptr<<endl;

	return 0;
}