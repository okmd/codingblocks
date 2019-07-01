#include<iostream>
using namespace std;
int getIthBit(int n, int i){
	int mask = 1<<i;
	return (n&(mask))!=0;
}
void setIthBit(int &n, int i){// changing in same copy
	int mask = 1<<i;
	n |= mask;

}
void clearIthBit(int &n, int i){// changing in same copy
	int mask = ~(1<<i);
	n &= mask;

}
int main(){
	int n,i;
	cin>>n>>i;
	cout<<getIthBit(n,i)<<endl;
	setIthBit(n,i);
	cout<<getIthBit(n,i)<<endl;
	clearIthBit(n,i);
	cout<<getIthBit(n,i)<<endl;
	return 0;
}

/*
Problem: Ith bit of a number.
13 = 1101
mask(2nd bit): 0100
13&mask = 1101 & 0100 = 0100
0100!=0 i.e if not 0 then bit is 1 else 0

*/