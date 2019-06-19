#include<iostream>
using namespace std;
int main(){
	int n,k;
    cin>>n;
	for(int i=1;i<=n;i++){
		//top left
		for(int j=n;j>=n-i+1;j--){
			cout<<j<<" ";
		}
		//top space
		for(int j=2*(n-i)+1;j>=1;j--){
			cout<<"  ";
		}
		// top right
		for(int j=n-i+1;j<=n;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}

	// central line
	for(int j=n;j>=0;j--) cout<<j<<" ";
	for(int j=1;j<=n;j++) cout<<j<<" ";
	cout<<endl;
	for(int i=1;i<=n;i++){
		//bottom left
		for(int j=n;j>=i;j--){
			cout<<j<<" ";
		}
		//bottom space
		for(int j=1;j<=2*i-1;j++){
			cout<<"  ";
		}
		// bottom right
		for(int j=i;j<=n;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}

/*


Input:5
Output:
	 5                   5 
     5 4               4 5 
     5 4 3           3 4 5 
     5 4 3 2       2 3 4 5 
     5 4 3 2 1   1 2 3 4 5 
     5 4 3 2 1 0 1 2 3 4 5 
     5 4 3 2 1   1 2 3 4 5 
     5 4 3 2       2 3 4 5 
     5 4 3           3 4 5 
     5 4               4 5 
     5                   5 
*/