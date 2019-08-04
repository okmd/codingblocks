#include <iostream>
#include <stack>
using namespace std;
// top, pop, empty, push only operation allowd
// Method 2
void transfer(stack<int> &s1, stack<int> &s2, int n){
	for(int i=0; i<n; i++){
		s2.push(s1.top());
		s1.pop();
	}
}

void reverse(stack<int> &s1){
	stack<int> s2;
	int n = s1.size();
	for(int i=0;i<n; i++){
		int x = s1.top(); // take top
		s1.pop(); 
		transfer(s1,s2, n-i-1);
		s1.push(x);
		transfer(s2,s1,n-i-1);
	}

}
// Method 3:
void push_bottom(stack<int> &s, int x){
	if(s.empty()){
		s.push(x);
		return;
	}
	int y = s.top();
	s.pop();
	push_bottom(s,x);
	s.push(y);
}
void recursive_reverse(stack<int> &s){
	if(s.empty())
		return;
	int x = s.top();
	s.pop();
	recursive_reverse(s);
	push_bottom(s,x);
}
int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	//reverse(s);
	recursive_reverse(s);

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}




/*
Method 1: using 2 stack.
* Move s1 to s2 to s3 to s1.
* Now s1 has reverse stack.

Method 2: using 1 stack.
* take out top and move n-i-1 from s1 to s2. iE(0....N)
* put top into s1.
* again put all element from s2 to s1.
* repeat these steps till reversed.

Method 3: using recursion.
* take out top and reverse the remaining stack.
* if stack empty do nothing
* insert poped element, now stack is reversed.

*/
