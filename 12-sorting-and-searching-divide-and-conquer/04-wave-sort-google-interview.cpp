#include <iostream>
using namespace std;

int main(){
	
	int n;//=6;
	cin>>n;
	int a[n];// = {1,3,4,2,7,8};
	// scan array
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// goto every peak and create peak
	for(int i=0;i<n;i+=2){
		// check left
		if(i>0 and a[i-1] > a[i]){
			swap(a[i], a[i-1]); // inbult swap function
		}
		// check right
		if(i<n-1 and a[i+1]>a[i]){
			swap(a[i],a[i+1]);
		}
	}
	// print array
	for(int i=0;i<n;i++){
		cout<<a[i]<<", ";
	}
	cout<<endl;
	return 0;
}

/*
IMPORTANT and TRICKY question asked in various interviews including Google.
	
	Assuming distinct number/unique/non-repeating numbers.

*/