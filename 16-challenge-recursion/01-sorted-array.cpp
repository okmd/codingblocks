#include<iostream>
using namespace std;
bool isSorted(int arr[], int n, int k){
	if(n==0) return true;
	bool v = isSorted(arr, n-1,k);
	if(arr[n-1]>arr[n]) return false;
	return v; // returning back
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	(isSorted(arr, n-1, n))? cout<<"true\n": cout<<"false\n";
	return 0;
}


/*

Input: 1 2 3 4 5
Output: true

*/