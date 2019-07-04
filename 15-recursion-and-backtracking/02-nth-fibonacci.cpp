#include <iostream>
using namespace std;
int fibonacci(int n){
	if(n==0 or n==1) return n;
	return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
	int n;
	cin>>n;
	cout<<fibonacci(n)<<endl;
	return 0;
}

/*
Fibonacci series: 0 1 1 2 3 5 8 13 21 ....
Terms:			  0th, 1st ,2nd, 3rd .....

F(n) = F(n-1) + F(n-2)

F(0) = 0
F(1) = 1

*/