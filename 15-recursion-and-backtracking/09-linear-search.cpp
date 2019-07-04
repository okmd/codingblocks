#include <iostream>
using namespace std;

int linear_search(int arr[], int i, int n, int key){
	if(n==i) return -1;
	if(arr[i]==key) return i;
	return linear_search(arr, i+1, n, key);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int key;
	cin>>key;
	cout<<linear_search(arr, 0, n, key);
	cout<<endl;
	return 0;
}

/*
Problem: search element index or -1 if not present.

1, 3, 2 ,6 ,8, 0

1) if present return index
2) check in next part,
3) repeat 2)
4) -1 other wise

*/
