#include<iostream>
#include<bitset>
using namespace std;

int main(){
	bitset<30> b;
	cout<<b<<endl;
	b[2]=1;
	cout<<b<<endl;
	return 0;
}

/*
It take only one bit to represent 1 bit.
while normal bool variable take 1 Byte.
It is effient in time and space.
Here index start from right.

*/