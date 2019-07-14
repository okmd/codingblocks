#include <iostream>
#include <cstring>
using namespace std;

int duplicate(char a[], char b[], int n){
	if(n==0){
		b[n] = a[n];
		return n;
	}
	int i = duplicate(a,b,n-1);

	if(a[n-1] == a[n]){
		b[i++] = a[n];
		b[i++] = '*';
	}
	else
		b[i++] = a[n-1];

	if(n==strlen(a)-1){
		b[i++]=a[n];
		b[i]='\0';
		cout<<b;
	}
	return i;
	
}

int main(){
	char in[100], out[100];
	cin>>in;
	int n = strlen(in);
	duplicate(in, out, n-1);
	cout<<endl;
	return 0;
}

/*

Input: 	hello
Output:	hel*lo
Input: 	aaabbbcccc
Output:	a*a*ab*b*bc*c*c*c

*/