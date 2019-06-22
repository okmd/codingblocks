#include<iostream>
using namespace std;

int *createX(){
	int x=10;
	cout<<"inside x value: "<<x<<endl;
	cout<<"inside x address: "<<&x<<endl;
	return &x; // don't return can return address, or return 0 depending upon compiler
}

void update(int &z){
	// z is the new name of the variable which is passed
	z++;
}
int main(){
	int x=10;
	int &y = x;// y is refrence variable
	// x and y are names of same bucket/location
	y++;
	cout<<x<<", "<<y<<endl; //11,11
	y = y+1;
	cout<<x<<", "<<y<<endl; //12,12
	x=x+1;
	cout<<x<<", "<<y<<endl; //13,13
	update(x);
	cout<<x<<", "<<y<<endl; //14,14
	update(y);
	cout<<x<<", "<<y<<endl; //15,15

	////////////////////

	int *xptr = createX();
	cout<<xptr<<endl;
	return 0;
}

/*
Note: Neve try to return address of local variable.
can return address, or return 0 depending upon compiler,
but retured address is no longer available so,
derefrencing this address may cause segmentation error if address is of 
outside memory otherwise a random value get printed.
but if returned address is 0 and derefrencing it will cause runtime error.


*/