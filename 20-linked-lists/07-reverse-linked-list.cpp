#include <iostream>
#include "01-linked-list.cpp"
using namespace std;

int main(){
	LL a;
	a.insert_at_head(4);
	a.insert_at_head(5);
	a.insert_at_middle(6,1);
	a.insert_at_middle(7,2);
	a.insert_at_middle(10,4);
	a.insert_at_middle(11,6);
	a.insert_at_tail(8);
	a.insert_at_tail(9);
	a.print();
	a.reverse();
	a.print();
	a.recursive_reverse(a.get_head());
	a.print();
	return 0;
}

/*

Data structures: Linkedlist, insertion

*/