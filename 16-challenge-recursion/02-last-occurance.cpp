#include<iostream>
using namespace std;
int findLast(int arr[], int n, int k, int size){
    if(arr[n]==k) return n;
    if(n==0) return -1;
    int index = findLast(arr, n-1, k, size);
    return index;
}
int main() {
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    cin>>k;
    cout<<findLast(arr, n-1, k, n);
	return 0;
}

/*

7
86 -16 77 65 45 77 28
77

Output: 5

*/