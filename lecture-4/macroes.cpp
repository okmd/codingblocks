#include <iostream>
#define  say cout<<
#define PI 3+45
using namespace std;

int main(){
	const int n=10; // const can't be reinitialized or updated, same for garbage 
					// it should be initialised at declaration
	say n<<endl; // we can't write n++ or anything
	say "Hello Mr. Jarvis\n";
	say "2*PI=2*3+45=>"<<2*PI<<"\nPI=3+45=>"<<PI<<endl;
	return 0;
}

/*
	10
	Hello Mr. Jarvis
	2*PI=2*3+45=>51
	PI=3+45=>48

*/