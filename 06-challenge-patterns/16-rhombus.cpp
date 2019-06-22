#include<iostream>
using namespace std;
int main() {
	int n,k;
	cin>>n;
	for(int i=1;i<=n;i++){
		//spaces
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(int j=i;j<=2*i-1;j++){
			cout<<j<<" ";
			k=j;
		}
		for(int j=1;j<=i-1;j++){
			cout<<k-- - 1<<" ";
		}
		cout<<endl;
	}
	for(int i=n-1;i>=1;i--){
		//spaces
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(int j=i;j<=2*i-1;j++){
			cout<<j<<" ";
			k=j;
		}
		for(int j=1;j<=i-1;j++){
			cout<<k-- - 1<<" ";
		}
		cout<<endl;
	}
    return 0;
}

/*

Input: 
    3
Output:
     1
   2 3 2
 3 4 5 4 3
   2 3 2
     1

*/
