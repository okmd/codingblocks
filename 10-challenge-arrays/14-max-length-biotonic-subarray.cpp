#include<iostream>
#include <climits>
using namespace std;

int max_subarray(int arr[], n){
	
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		max_subarray(arr,n);
	}
	return 0;
}

/*
Problem: Maximum length Biotonic Subarray.

Input:
2
6
12 4 78 90 45 23
4
40 30 20 10

Output:
5
4

*/