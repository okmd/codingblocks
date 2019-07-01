#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	cout<<"BEFORE: a = "<<a<<", b = "<<b<<endl;
	a = a^b;
	b = a^b;
	a = a^b;
	cout<<"AFTER: a = "<<a<<", b = "<<b<<endl;
	return 0;
}

/*
Problem: Swapping two numbers.

*/





















