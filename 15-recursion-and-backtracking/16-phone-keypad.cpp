#include <iostream>
#include <cstring>
using namespace std;
char keypad[][10] = {
	"", // 0
	"", // 1
	"ABC",
	"DEF",
	"GHI",
	"JKL",
	"MNO",
	"PQRS",
	"TUV",
	"WXYZ" // 9
};
void print_keypad(char in[], char out[], int i, int j){
	// base case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<", "<<endl;
		return;
	}
	//recursion case
	// include current 
	int digit = in[i] - '0';
	if(digit == 0 || digit == 1)
		print_keypad(in, out, i+1, j);
	// iterate for character mapped to digit in keypad array
	for(int k=0; keypad[digit][k]!='\0'; k++){
		out[j] = keypad[digit][k];
		print_keypad(in, out, i+1, j+1);
	}
}

int main(){
	char in[100];
	char out[100];
	cin>>in;
	print_keypad(in,out,0,0);
	cout<<endl;
	return 0;
}

/*
Problem: Given a string(input digit) find all possible string
which can be mapped to a digit using recursion.

total substring = 2^n;

It is most common question asked in interview.

Input:
123
Output:


*/
