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