#include <iostream>
#include <cmath>
using namespace std;
int power(int n, int p){
	if(p==1) return n;
	return n*power(n,p-1);
}

int bitPower(int n, int p){
	return 0; // implement ??
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<power(a,b)<<endl;
	cout<<bitPower(a,b)<<endl;
	return 0;
}

/*

Problem: Given, N,P find N^P;
N=2, P=3
2^3 = 1<<3  = 8 (work only if power of 2)
N=3, P=2
3^2 =		= 9 ??
4^3 =		= 64 ??



*/