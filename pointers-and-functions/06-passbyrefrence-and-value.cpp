#include <iostream>
using namespace std;
/*

*/

int incrementbyvalue(int n){
	n = n+1;
	return n;
}

int incrementbyrefrence(int *n){
	*n = *n +1;
	return *n;
}

int main(){
	int n=9;
	cout<<n<<endl;//original value
	cout<<incrementbyvalue(n)<<endl; // incremented copy
	cout<<n<<endl; // original value not modified
	cout<<incrementbyrefrence(&n)<<endl; // incrementd original value and retured
	cout<<n<<endl;// original valued got modified
	return 0;
}
