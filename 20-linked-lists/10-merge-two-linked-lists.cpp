#include <iostream>
#include "01-linked-list.cpp"
using namespace std;
// Merge tow linked lists without using extra space

int main(){
	LL a,b;
	a.make_list();
	a.print();
	b.make_list();
	b.print();
	// merge
	LL *c = a.merge(&b);
	c->print();

	return 0;
}

/*

Merge two singly list without creating new LL

*/