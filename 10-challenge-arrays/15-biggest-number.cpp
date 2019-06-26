#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool compare(string a, string b){
	return a>b;
}
int max_number(string arr[], int n){
	sort(arr,arr+n,compare);
	for(int i=0;i<n;i++)
		cout<<arr[i];
	cout<<endl;
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		max_number(arr,n);
	}
	return 0;
}

/*
Problem: Maximum length Biotonic Subarray.

Input:
1
4
54 546 548 60

Output:

6054854654

*/