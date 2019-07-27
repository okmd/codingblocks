#include <iostream>
#include "01-linked-list.cpp"
using namespace std;

int main(){
	LL a;
	a.make_list();
	a.print();
	// find kth-node from end
	int k = 4;
	Node *ptr = a.kth_node_from_end(k);
	cout<<k<<"th element from end: "<<a[ptr]<<endl;
	return 0;
}

/*

Data structures: Linkedlist, insertion

*/