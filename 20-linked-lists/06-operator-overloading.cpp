#include <iostream>
#include "01-linked-list.cpp"
using namespace std;
istream& operator>>(istream &is, LL &n){
	n.make_list();
	return is;
}
ostream&  operator<<(ostream &os, LL &n){
	n.print();
	return os;
}
int main(){
	LL a,b;
	cin>>a>>b; // make_list() for a and b
	cout<<a<<b; // print() for a and b
	cout<<"Size: "<<a.length()<<endl;
	cout<<"Size: "<<b.length()<<endl;
	return 0;
}

/*
Data structures: Linkedlist, insertion

*/