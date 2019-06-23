#include<iostream>
using namespace std;
int main(){
	// given an element to be searched.
	int n;
	cout<<"Enter array size: ";
	cin>>n;
	int arr[n];
	int num;
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter element to be searched: ";
	cin>>num;

	// linear search
	for (int i = 0; i < n; ++i){
		if(arr[i] == num){
			cout<<num<<" found at index: "<<i<<endl;
			return 0;
		}
	}
	cout<<num<<" not found at any index."<<endl; // or if(i==n) print not found, i must be declared outside loop

	return 0;
}