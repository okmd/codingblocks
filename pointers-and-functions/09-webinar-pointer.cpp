#include <iostream>
using namespace std;


void print(){
	cout<<"-------------------------------\n";
}
void array_print(int *a, int n){
	cout<<a<<endl;// base address of array
	for(int i=0;i<n;i++)
		cout<<a[i]<<",";
	cout<<endl;
}
void array_print1(int a[], int n){
	cout<<a<<endl;// base address of array
	cout<<sizeof(a)<<endl;// integer pointer
	cout<<sizeof(int*)<<endl;
	cout<<sizeof(int)<<endl;
}

int main(){
	char ch ='A';
	cout<<ch<<endl;
	cout<<&ch<<endl;// it will print atleast one A, but more char can also be printed
	// as it prints untill it finds the null char.
	cout<<(void*)&ch<<endl; // typecast to tell the compiler it is not char address
	cout<<(int*)&ch<<endl;
	// cout treats char address differently, instead of printing the address it printing 
	// the contents in the memory.

	int *ptr;
	ptr = (int *)&ch;
	// if ptr+1 then it will jump by 4byte instead 1byte  as in case for char
	cout<<ptr<<endl;

	print();

	int x=10;// xadd = 20, yadd = 30
	int *y=&x;
	cout<< x <<endl; 	// 10
	cout<< &x <<endl;	// 20
 	cout<< y <<endl;	// 20
	cout<< &y <<endl;	// 30
	cout<< *y <<endl;	// 10
	cout<< *(&y) <<endl;// 20
	cout<< *(&x) <<endl;// 10

	print();

	int arr[]={1,4,2,5};
	int size = sizeof(arr)/sizeof(int); // number of element in the array
	// 4byte*4elements = 16byte = size of array, as sizeof(int)=4byte
	// sizeof(int) = 4byte
	// 16/4 = 4 elemets
	cout<<sizeof(arr)<<endl; //16
	cout<<sizeof(int)<<endl; //4
	array_print(arr,size);

	print();

	array_print1(arr,size);

	print();
	// refrence variable

	return 0;
}

/*
recieving array as *a, a[] is the samething.
Note : arrays are passed by refrence. only starting address is passed.

*/