#include<iostream>
using namespace std;
int main(){
	int n,k;
    cin>>n;
	for(int i=1;i<=n/2;i++){
		for(int j=1;j<=n/2+1;j++){
			(j==1 or j==n/2+1)?cout<<"*":cout<<" ";
		}
		for(int j=1;j<=n/2;j++){
			(i==1)?cout<<"*":cout<<" ";
		}
		cout<<endl;
	}
	for(int j=1;j<=n;j++)  cout<<"*"; cout<<endl; //middle stars

	for(int i=1;i<=n/2;i++){
		for(int j=1;j<=n/2+1;j++){
			(i==n/2 or j==n/2+1)?cout<<"*":cout<<" ";
		}
		for(int j=1;j<=n/2;j++){
			(j==n/2)?cout<<"*":cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

/*
only add numbers
constraint n>=5
Input:7
Output:
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

*/