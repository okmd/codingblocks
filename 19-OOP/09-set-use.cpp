#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
	set <int> s;
	s.insert(11);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	s.insert(6);
	s.insert(7);
	for(auto x: s)
		cout<<x<<endl;
	s.clear(); // remove all element
	cout<<s.size()<<endl;
	return 0;
}