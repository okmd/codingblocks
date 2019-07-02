#include <iostream>
using namespace std;
int setBitsEfficient(int n){ // O(no. of set bits only)
	int count = 0;
	while(n){
		count++;
		n = n&(n-1);
	}
	return count;
}

int main(){
	int t, a, b, bits;
	cin>>t;
	while(t--){
		bits = 0;
		cin>>a>>b;
		for(int i=a; i<=b; i++){ // range a to b
			bits += setBitsEfficient(i);
		}
		cout<<bits<<endl;
	}
	return 0;
}