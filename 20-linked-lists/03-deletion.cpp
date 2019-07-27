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
	in.delete_from_head();
	in.delete_from_head();
	in.print();
	in.delete_from_middle(1);
	in.print();
	in.delete_from_middle(2);
	in.print();
	in.delete_from_middle(4);
	in.print();
	in.delete_from_middle(8);
	in.print();
	in.delete_from_tail();
	in.delete_from_tail();
	in.print();
	cout<<"Size: "<<in.length()<<endl;

	return 0;
}

/*
Data structures: Linkedlist, insertion
5->4->NULL
6->7->5->10->4->11->NULL
6->7->5->10->4->11->8->9->NULL
*/