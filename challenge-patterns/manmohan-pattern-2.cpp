#include<iostream>
using namespace std;
int main() {
	int n, a=0,b=1,c;
	cin>>n;
	cout<<1<<endl;
	for(int i=2;i<=n;i++){
		cout<<i-1;
		for(int j=1;j<i-1;j++){
			cout<<0;
		}
		cout<<i-1;
		cout<<endl;
	}

    return 0;
}

/*

Input: 
    5
Output:
    1
	11
	202
	3003
	40004

*/
