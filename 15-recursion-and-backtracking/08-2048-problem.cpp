#include <iostream>
using namespace std;
char spellings[][10] = {"zero", "one","two","three", "four", "five","six", "seven", "eight", "nine"};

void printChar(int n){
	if(n==0) return;
	printChar(n/10);
	cout<<spellings[n%10]<<" ";
}

int main(){
	int n;
	cin>>n;
	printChar(n);
	cout<<endl;
	return 0;
}

/*
Problem: print 2048 as string "Two Zero Four Eight".

*/
