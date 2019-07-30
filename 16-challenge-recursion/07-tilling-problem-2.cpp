#include <iostream>
#include <cstring>
#define mod 1000000007

using namespace std;

void floor(int n, int m){
	if(n%m == 0 or m%n == 0) cout <<2;
	else cout<<1;
}

int main(){
	int t, n, m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		floor(n,m);
		cout<<endl;
	}
	return 0;
}

/*
Not Complete
Input:
2
2 3
4 4
Output:
1
2

*/