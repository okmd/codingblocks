#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool balanced(string str){
	stack<int> s;
	for(int i=0; i<str.length(); i++){
		char c_char = str[i];
		if(c_char=='('){
			s.push(c_char); // add all opening parenthesis.
		}else if(c_char==')'){
			if(s.empty() or s.top()!='(') // 
				return false;
			s.pop(); // remove
		}

	}
	return s.empty();// true if empty, false if not. (()
	// a balanced string will have empty stack.

}

int main(){
	
	string str;
	cin>>str;
	if(balanced(str))
		cout<<"Yes\n";
	else
		cout<<"No\n";
	
	return 0;
}