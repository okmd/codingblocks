#include<iostream>
using namespace std;
int main(){
	// find sub array whose sum is maximum
	// array have +ve and -ve both values
	
	int n, max_sum=0, sum,left,right;
	cout<<"Enter array size: ";
	cin>>n;
	int arr[n];
	int csum[n];
	cout<<"Enter array elements: ";
	cin>>arr[0];
	csum[0]=arr[0];
	// Cumulative sum method, optimized way
	// cum sum is the sum at index i from 0 to index i
	// csum in o(n)
	for(int i=1;i<n;i++){
		cin>>arr[i];
		csum[i] = csum[i-1] + arr[i];
	}
	// n=9;
	// int arr[n]={-4,1,3,-2,6, 2, -8, -9, 4};

	// finding max sum in o(n^2)
	for(int i=0;i<n;i++){
		for (int j = i; j < n; ++j){
			sum = (i>0)? csum[j] - csum[i-1]: csum[j];
			cout<<sum<<endl;
			if(sum>max_sum){
				max_sum = sum;
				left = i;
				right =j;
			}
		}
	}

	
	cout<<"Array having max sum: ";
	for(int i=left;i<=right;i++){
		cout<<arr[i]<<",";
	}
	cout<<"\nMaximum sum is: "<<max_sum<<endl;

	return 0;
}
