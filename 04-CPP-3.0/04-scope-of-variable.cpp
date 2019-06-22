#include <iostream>
using namespace std;
// lifestime{created, destroyed}
// visible {region}
/*
Local Variable 
Global Variable

*/
int y=100; //global variable
int x=1000;
int main(){
	int x=10; // comment this variable
	cout<<x<<endl; // local variable
	cout<<y<<endl; //

	x=x+10;
	::x = ::x+1000;
	cout<<x<<endl; // local variable 
	cout<<::x<<endl; // 
	return 0;
}

/*

10
100
20
2000

or if local x not present
1000
100
2010
2010

*/