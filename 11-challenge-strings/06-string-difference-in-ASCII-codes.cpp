#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char c,prev;
	cin>>c;
	prev = c;
	cout<<c;
	while(c!='\0'){
		cin>>c;
		cout<<c-prev<<c;
		prev = c;
	}
	return 0;
}

/*

acb
a2c-1b

*/
