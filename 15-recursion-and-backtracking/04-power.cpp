#include <iostream>
using namespace std;
int power(int a, int b){ // O(b) steps
	if(b==0) return 1;
	return a*power(a,b-1);
}

int fastPower(int a, int b){ // O(lon2(b)) steps
	if(b==0) return 1;
	int ans = fastPower(a,b/2); // calculate answer
	ans *= ans; // square it
	if(b&1)// odd
		return a*ans;
	return ans;
}

int main(){
	int n,m;
	cin>>n>>m;
	cout<<power(n,m)<<endl;
	cout<<fastPower(n,m)<<endl;
	return 0;
}

/*

5^3 = 5*power(5,2) = 5*5*power(5,1) = 5*5*5*power(5,0) = 5*5*5*1 = 125

Stack: O(b)

*/