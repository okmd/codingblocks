#include <iostream>
using namespace std;
int main(){
	int n,k;
	cout<<"Enter Number to be Found: ";
	cin>>k;
	while(1){
		cin>>n;
		if(n==k){
			cout<<"Found!\n";
			return 0;
		}
	}
}