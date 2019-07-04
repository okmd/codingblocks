#include <iostream>
using namespace std;
int isSorted(int a[], int n){
	if(n==1) return true;
	if(a[0]<a[1] && isSorted(a+1, n-1))
		return true;
	return false;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<isSorted(a,n)<<endl;
	return 0;
}

/*
				|true; 						  n=1;
isSorted(n) = 	|
				|a[0]&a[1]&isSorted(a+1, n-1); n>1;

decreasing the size from front.
*/