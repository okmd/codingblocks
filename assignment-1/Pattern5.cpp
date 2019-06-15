#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter Even N: ";
    cin>>n;
	for(int i=1;i<=n/2;i++){
		for(int j=1;j<=(n-2*i)/2;j++)
			cout<<" ";
		for(int j=1;j<=2*i;j++){
			cout<<"*";
		}
		cout<<endl;
		for(int j=1;j<=(n-2*i)/2;j++)
			cout<<" ";
		for(int j=1;j<=2*i;j++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	return 0;
}

/*

Input:6
Output:
  **
  **
 ****
 ****
******
******

*/