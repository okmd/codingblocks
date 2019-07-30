#include <iostream>
#include "01-linked-list.cpp"
using namespace std;

int main(){
	LL a;
	a.make_list();
	a.print();
	// merge
	LL *c = a.merge_sort();
	c->print();

	return 0;
}

/*
Merge sort
Time Complexity:
Array : O(n)
LinkedList : O(n)


*/