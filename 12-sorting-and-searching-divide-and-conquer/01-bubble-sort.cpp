#include <iostream>
using namespace std;

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void bubble_sort_recursive(int arr[], int n){
	if(n==1)
		return;
	for(int i=0;i<n-1;i++)
		if(arr[i]>arr[i+1]){
			swap(&arr[i], &arr[i+1]);
		}
	return bubble_sort_recursive(arr, n-1);
}

void bubble_sort_iterative(int arr[], int n){
	

	int f=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j], &arr[j+1]);
				f=0;
			}
		}
		if(f){
			cout<<"Already Sorted:\n";
			break;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];// = {2,13,3,5,8,61}; // n=6
	// scan elements
	for(int i=0;i<n;i++)
		cin>>arr[i];
	//bubble_sort_iterative(arr,n);
	bubble_sort_recursive(arr,n);

	// printing sorted array
	for(int i=0;i<n;i++)
		cout<<arr[i]<<", ";
	cout<<endl;

	return 0;
}


/*

As bubble moves to the top, 
similarly large element moves at the end of every iteration.
A after each iteration decrease each iteration length

Note : for sorted array this can be detected after 1 teration.
*/