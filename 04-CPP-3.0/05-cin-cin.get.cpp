#include <iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;
	//read single line
	while(ch!='\n'){
		cout<<ch;
		cin>>ch;
	}
	// read paragraph ends with $
	while(ch!='$'){
		cout<<ch;
		cin>>ch;
	}
	// cin.get(), reads white spaces
	// single line
	ch = cin.get();
	while(ch!='\n'){
		cout<<ch;
		ch = cin.get();
	}
	// read paragraph ends with $
	while(ch!='$'){
		cout<<ch;
		ch = cin.get();
	}
	return 0;
}

/*



*/