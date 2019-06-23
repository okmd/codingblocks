#include<iostream>
using namespace std;
int main(){
	char a[50],i=0;
	cin>>a; // read int as char, char array

	if(a[i]=='9') i++; // read 1st number
	// if it is nine then 9-9 will give 0, so we are not considering
	while(a[i]!='\0'){
		int digit = a[i] - '0'; // convert char to int, x+k - x = k
		if(digit>=5){
			digit = 9 - digit;
			a[i] = digit + '0'; // again converting to char k + x = x+k
		}
		i++;
	}
	cout<<a<<endl;

	return 0;
}

/*

Given a number x<=10^18:
invert(9-t) its digit to get minimum possible number,
number should not start with zero
eg.
4545->4444
4371->4321
9981->0011 (wrong)
9981->9011 (right)
// store as long long int or char array(string)

*/
