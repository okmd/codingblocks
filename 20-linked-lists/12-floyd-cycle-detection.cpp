#include <iostream>
#include "01-linked-list.cpp"
using namespace std;

int main(){
	LL a;
	a.make_list();
	a.print();
	// merge
	if(a.cycle())
		cout<<"Yes!, Cycle is present\n";
	else
		cout<<"No!, Cycle is not present\n";

	return 0;
}

/*
Merge sort
Time Complexity:
Array : O(n)
LinkedList : O(n)


*/