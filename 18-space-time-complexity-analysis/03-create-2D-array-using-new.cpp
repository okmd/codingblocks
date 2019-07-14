#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 5,c=1;
	int **a  = new int*[n];

	for(int i=0; i<n; i++)
		a[i] = new int[n];
	//insert
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			a[i][j] = c++;
	}
	//show
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
	// free
	for(int i=0; i<n; i++)
		delete [] a[i];
	
	return 0;
}

/*


*/