#include<iostream>
using namespace std;
int main(){
	// find sub array whose sum is maximum
	// array have +ve and -ve both values
	int n, max_sum=0, sum,left,right;
	cout<<"Enter array size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	// n=9;
	// int arr[n]={-4,1,3,-2,6, 2, -8, -9, 4};
	// basic method
	// gerate all sub-array and generate sums
	// find maximum sum
	for (int i = 0; i < n; ++i){
		for (int j = i; j < n; ++j){
			sum =0;
			for (int k = i; k <=j; ++k){	
				sum += arr[k];
			}
			if(sum>max_sum){
				max_sum = sum;
				left=i;
				right=j;
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

// This solution is time consuming
// o(n^3)
// we can optimize this solution
// works good upto 100 elements