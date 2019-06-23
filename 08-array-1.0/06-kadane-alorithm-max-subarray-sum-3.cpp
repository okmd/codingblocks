#include<iostream>
using namespace std;
int main(){
	// find sub array whose sum is maximum
	// array have +ve and -ve both values
	
	int n, ms=0, cs=0;
	cout<<"Enter array size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	// n=9;
	// int arr[n]={-4,1,3,-2,6, 2, -8, -9, 4};

	// finding max sum in o(n)
	for(int i=0;i<n;i++){
		cs = cs + arr[i];
		if(cs<0){
			cs=0;
		}
		ms = max(ms, cs);
	}

	
	cout<<"Array having max sum: ";
	for(int i=left;i<=right;i++){
		cout<<arr[i]<<",";
	}
	cout<<"\nMaximum sum is: "<<max_sum<<endl;

	return 0;
}
