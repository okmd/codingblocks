#include <iostream>
using namespace std;
void print(int a[], int n){
	for(int i=0;i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int *create(){
	int  *a = new int[5];
	for(int i=0;i<5; i++)
		a[i] = i*i;
	print(a,5);
	cout<<a<<endl;
	return a;
}
int *createStatic(){
	int  a[] = {1,2,3,4,5};
	print(a,5);
	cout<<a<<endl;
	return a;
}
int main(){
	// static memory allocation
	int a =10;
	// dynamic memory allocation
	int *b = new int(20);
	cout<<a<<endl;
	cout<<*b<<endl;
	delete b;
	// to delete array 'delete [] array_name'.
	//static memory allocation
	int arr[2] ={10};
	// dynamic memory allocation
	int *brr = new int[2];
	*brr = 2;
	*(brr+1) = 5;
	cout<<arr[0]<<" "<<arr[1]<<endl;
	cout<<*brr<<" "<<*(brr+1)<<endl;
	delete [] brr; // delete array
	cout<<*brr<<" "<<*(brr+1)<<endl; // after delete
	// array dynamic
	int *ptr = create();
	cout<<ptr<<endl;
	print(ptr, 5);
	// array static
	int *ptr1 = createStatic(); // scope out of stack
	cout<<ptr1<<endl;
	//print(ptr1, 5);// error segmentation fault as address is 0/random

	return 0;
}