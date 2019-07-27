#include <iostream>
#include "01-linked-list.cpp"
using namespace std;
// Merge tow linked lists without using extra space

int main(){
	LL a,b;
	a.insert_at_head(1);
	a.insert_at_head(2);
	a.insert_at_head(3);
	a.insert_at_head(4);
	a.print();
	b.insert_at_head(5);
	b.insert_at_head(6);
	b.insert_at_head(7);
	b.insert_at_head(8);
	b.print();
	// merge

	return 0;
}

/*

Merge two singly list without creating new LL

*/