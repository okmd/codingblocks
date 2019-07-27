#include <iostream>
#include "01-linked-list.cpp"
using namespace std;

int main(){
	LL in;
	in.insert_at_head(4);
	in.insert_at_head(5);
	in.print();
	in.insert_at_middle(6,1);
	in.insert_at_middle(7,2);
	in.insert_at_middle(10,4);
	in.insert_at_middle(11,6);
	in.print();
	in.insert_at_tail(8);
	in.insert_at_tail(9);
	in.print();
	cout<<"Size: "<<in.length()<<endl;
	cout<<"Found: "<<in.linear_search(14)<<endl;
	cout<<"Found: "<<in.recursive_search(in.get_head(), 7)<<endl;

	return 0;
}

/*
Data structures: Linkedlist, insertion
5->4->NULL
6->7->5->10->4->11->NULL
6->7->5->10->4->11->8->9->NULL
Size: 8
Found: 0
Found: 1

*/