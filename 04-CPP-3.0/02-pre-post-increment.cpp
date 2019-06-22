#include <iostream>
using namespace std;

int main(){
	int a=10;
	cout<<a++<<endl; // post 1st use of a and then increment, 10 then a==11
	cout<<++a<<endl; // first increment then use a=12, 12
	return 0;
}

/*

10
12cal
*/