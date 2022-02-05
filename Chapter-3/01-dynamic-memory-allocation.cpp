#include<iostream>
using namespace std;

void scan(int *ptr, int n){
	for(int i=0; i<n; i++)
		cin>>ptr[i];
}
void print(int *ptr, int n){
	for(int i=0; i<n; i++)
		cout<<ptr[i]<<" ";
	cout<<endl;
}

int main(){
	// if ptr is NULL then memory not allocated
	int *ptr = (int*)malloc(5*sizeof(int)); // create memory to store 5 integer value
	scan(ptr, 5);
	print(ptr, 5);
	int *ptr1 = (int*)calloc(5, sizeof(int)); // create contiguous memory to store 5 integer value
	scan(ptr1, 5);
	print(ptr1, 5);
	ptr = (int*)realloc(ptr, 10*sizeof(int)); // increases memory to store 10 integer value
	scan(ptr, 10);
	print(ptr, 10);

	free(ptr);
	free(ptr1);
	return 0;
}

/*
There are functions which are used to allocate and free the dynamic memory.
malloc() 	-> ptr = (void*)malloc(size-in-byte) 	# memory allocation
calloc() 	-> ptr = (void*)calloc(n, element-size)	# contiguous allocation, default value is zero
realloc()	-> prt = (void*)realloc(ptr, new-size)
free()		-> It is used to de-allocate the dynamic memory allocated using malloc(), calloc()

Note: If fails to allocate memory then return NULL


Input : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
Output:
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 16 17 18 19 20 

*/