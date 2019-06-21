#include<iostream>
using namespace std;
int main(){
	int n,k;
    cin>>n;
	for(int i=1;i<=n;i++){
		//top left
		for(int j=1;j<=n-i+1;j++){
			cout<<j<<" ";
		}
		//start
		for(int j=1;j<2*i-2;j++){
			cout<<"* ";
		}
		cout<<endl;
	}

	return 0;
}

/*


Input:5
Output:
	1 2 3 4 5
	1 2 3 4 * 
	1 2 3 * * *
	1 2 * * * * *
	1 * * * * * * *

*/