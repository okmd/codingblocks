#include<iostream>
#include <cstring>
using namespace std;

int main(){
	int a[10][10],R,C;
	cin>>R>>C;
	//scan
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin>>a[i][j];
		}
	}
	//print
	cout<<"Unique print: \n";
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cout<<a[i][j]<<" "; // we can match if we want to find some int vale.
		}
		cout<<endl;
	}
	// wave print- up then down repeatidly
	cout<<"alternate print: \n";
	for(int j=0;j<C;j++){
		if(j&1){ // odd
			for(int i=R-1;i>=0;i--){
				cout<<a[i][j]<<" "; // we can match if we want to find some int vale.
			}
		}else{ // even column
			for(int i=0;i<R;i++){
				cout<<a[i][j]<<" "; // we can match if we want to find some int vale.
			}
		}
	}
	cout<<endl;
	return 0;
}

/*

Input:
3 3
1 2 3 4 5 6 7  8 9

Output:
Unique pattern
1 2 3
4 5 6
7 8 9
Alternate pattern
1 4 7 8 5 2 3 6 9

*/