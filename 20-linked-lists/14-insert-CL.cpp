#include <iostream>
#include "13-circular-linked-list.cpp"
using namespace std;

int main(){
	CL l;
	l.insert_at_head(5);
	l.insert_at_head(4);
	l.insert_at_head(3);
	l.insert_at_head(2);
	l.insert_at_head(1);
	l.print();
	return 0;
}