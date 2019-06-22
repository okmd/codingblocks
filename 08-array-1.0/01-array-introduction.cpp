#include<iostream>
using namespace std;

int main(){

	int a[10]; //[10] maximum possible size of array can't be extented
	// initially it contains garbage value
	// array can be initialized can be different ways
	/*
		int a[10]={0}; // all elements are 0 as {0,0,0,0,0,0,0,0,0,0}
		int a[10]={1,2,3}; // {1,2,3,0,0,0,0,0,0,0}
		// what ever element we provide they become first n element 
		// remaning location filled with zeros.
		// un-initilized array contain garbage value.
	*/
	// input element in array
	for (int i = 0; i < 10; ++i)
	{
		cin>>a[i];
	}

	// outputting array
	for (int i = 0; i < 10; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	// update
	for (int i = 0; i < 10; ++i)
	{
		a[i] = a[i]*a[i];
	}
	// outputting array
	for (int i = 0; i < 10; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	// reverse array elemet
	// print from the last 9 to 0
	// print 0 to 9 using n-i
	for (int i = 0; i < 10; ++i)
	{
		cout<<a[9-i]<<" ";
	}
	cout<<endl;
	return 0;
}