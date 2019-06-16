#include <iostream>
#define  say cout<<
#define PI 3+45
using namespace std;

int main(){
	int a=10;
	int b=a++;
	if(b>=11 || a++ >=11){}
	cout<<b<<endl;
	cout<<a<<endl;
	return 0;
}

/*
For: || operator
	10
	12
For: && operator
	10
	11

*/