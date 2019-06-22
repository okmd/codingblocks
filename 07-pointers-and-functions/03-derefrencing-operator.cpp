#include <iostream>
using namespace std;

int main(){
	int x=10;
	int *xptr; // int is data type, next * is sytax part
	xptr = &x; // assignment
	cout<< &x <<endl; // let 100
	cout<< xptr <<endl; //100
	
	cout<< *(&x) <<endl; //10
	cout<< *(xptr) <<endl;//10

	cout<< *(&xptr) <<endl; //100
	cout<< &(*xptr) <<endl; //100

	// pointer to a pointer 
	int **xxptr =&xptr; // here int * is datatype, next * is syntax
	cout<<xxptr<<endl; // address of xptr
	cout<<&xptr<<endl; // address of xptr

	return 0;
}