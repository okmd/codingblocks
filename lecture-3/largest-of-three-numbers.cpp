#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter 1'st Number: ";
	cin>>a;
	cout<<"Enter 2'nd Number: ";
	cin>>b;
	cout<<"Enter 3'rd Number: ";
	cin>>c;
	if(a>b && a>c){
		cout<<a<<" is largest\n";
	}else if(b>a && b>c){
		cout<<b<<" is largest\n";
	}else{
		cout<<c<<" is largest\n";
	}
	return 0;
}