#include <iostream>
using namespace std;
int multiply(int n, int m){
	if(n==1) return m;
	return m + multiply(n-1,m);
}

int main(){
	int n,m;
	cin>>n>>m;
	cout<<multiply(n,m)<<endl;
	return 0;
}

/*

*/
