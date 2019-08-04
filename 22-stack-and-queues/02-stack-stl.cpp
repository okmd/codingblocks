#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	stack<string> s;
	s.push("hello");
	s.push("hel");
	s.push("hi");
	s.push("mango");
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;

	return 0;
}