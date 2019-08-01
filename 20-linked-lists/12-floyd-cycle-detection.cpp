#include <iostream>
#include "01-linked-list.cpp"
using namespace std;

void chk(LL &a){
	if(a.cycle())
		cout<<"Yes!, Cycle is present\n";
	else
		cout<<"No!, Cycle is not present\n";
}
int main(){
	LL a;
	a.make_list();
	a.print();
	// merge
	chk(a);
	a.add_cycle(2,5);
	chk(a);
	a.remove_cycle();
	chk(a);

	return 0;
}

/*
Merge sort
Time Complexity:
Array : O(n)
LinkedList : O(n)


*/