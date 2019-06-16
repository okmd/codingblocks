#include <iostream>
using namespace std;

int main(){

	unsigned char c;
	int i=1,n,j;
	cout<<"Enter number: ";
	cin>>n;
	while(i<=n){
		j=1;
		c='A';//or c=65
		while(j++<=i){
			cout<<c++<<" ";
		}
		i++;
		cout<<endl;
	}
	return 0;
}

/*
Input:
	Enter number: 5
Output:
	A 
	A B 
	A B C 
	A B C D 
	A B C D E 

*/