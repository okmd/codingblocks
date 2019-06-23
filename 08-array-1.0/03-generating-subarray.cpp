#include<iostream>
using namespace std;
int main(){
	// generate all sub-array of a given array
	// continous array i to j and i<=j
	int n;
	cout<<"Enter array size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			for (int k = i; k <=j; ++k)
			{	
				cout<<arr[k]<<", ";
			}
			cout<<endl;
		}
	}

	return 0;
}

// as three loops are working so it is not the efficient algorithm.