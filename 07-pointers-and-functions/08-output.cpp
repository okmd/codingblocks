#include <iostream>
using namespace std;


int main(){
	int a=10, *j;
	void *k;
	j=k=&a; // invalid conversion due to j=k => int* = void*
	j++;
	k++; // warning
	cout<<j<<k;
	return 0;
}

/*
this would not compile as k(void) can't be assigned to j(int)
but assigning j=&a and k=&a will compile

// a void pointer after typecast can be assined to other datatype pointer(int*)
e.g
k=&a
j=k // error
j=(int*)k // no error

*/