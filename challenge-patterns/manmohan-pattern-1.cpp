#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i&1) cout<<"1";
			else
				(j==1 or j==i)?cout<<"1" : cout<<"0";
		}
		cout<<endl;
	}
	
    return 0;
}

/*
odd row-odd num of 1's
even row-first and last 1's and middle 0's
Input: 
6
Output:
1 
11
111 
1001 
11111
100001


*/
