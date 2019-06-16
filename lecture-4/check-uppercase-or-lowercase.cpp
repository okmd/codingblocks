#include <iostream>
using namespace std;

int main(){

	char c;
	cout<<"Enter character: ";
	cin>>c;
	if(c>='A' && c<='Z'){ // c>=65 && c<=90
		cout<<"ASCII("<<c+0<<")=>"<<c<<" is Uppercase\n"; //c+0 convert to int both datatype same type
	}else if(c>='a' && c<= 'z'){
		cout<<"ASCII("<<c+0<<")=>"<<c<<" is Lowercase\n";
	}
	return 0;
}

/*
Input:
	Enter Character: B
Output:
	ASCII(66)=>B is Uppercase

*/