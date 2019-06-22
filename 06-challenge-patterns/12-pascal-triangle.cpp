#include<iostream>
using namespace std;
int main(){
	int n,k;
	cout<<"Enter N: ";
    cin>>n;
	for(int i=1;i<=n;i++){
		k=1;
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<k<<" ";
			k = k*(i-j)/j;
		}
		cout<<endl;
	}
	return 0;
}

/*
Pascal's triangle

Input:6
Output:
     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 
1 5 10 10 5 1

*/