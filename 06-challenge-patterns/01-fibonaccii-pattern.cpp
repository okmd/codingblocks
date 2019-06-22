#include<iostream>
using namespace std;
int main() {
	int n, a=0,b=1,c;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			c=a;
			cout<<c<<"\t";
			c=a+b;
			a=b;
			b=c;
		}
		cout<<endl;
	}

    return 0;
}

/*

Input: 
    4
Output:
    0
	1 1
	2 3 5
	8 13 21 34

*/
