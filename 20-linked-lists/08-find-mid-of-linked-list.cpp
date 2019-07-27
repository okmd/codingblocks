#include <iostream>
#include "01-linked-list.cpp"
using namespace std;

int main(){
	LL a;
	a.make_list();
	a.print();
	// find mid node
	Node *ptr = a.mid_point();
	cout<<"Middle Element: "<<a[ptr]<<endl;
	return 0;
}

/*

Data structures: Linkedlist, insertion

*/