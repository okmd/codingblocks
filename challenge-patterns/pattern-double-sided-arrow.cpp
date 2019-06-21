#include <iostream>
using namespace std;

int main(){
	int n,row,col,val;
	cin>>n;

	for(int i=1;i<=n/2+1;i++){
		//top left space
		for(int j=1;j<=n-2*i+1;j++){
			cout<<"  ";
		}
		//top left number
		for(int j=i;j>=1;j--){
			cout<<j<<" ";
		}
		// space middle
		for(int j=1;j<=2*(i-1)-1;j++){
			cout<<"  ";
		}
		// top right number
		for(int j=1;j<=i;j++){
			if(i!=1) cout<<j<<" ";
		}
		cout<<endl;
	}
	int k = n/2;
	for(int i=1;i<=n/2;i++){
		//bottom left space
		for(int j=1;j<=2*i;j++){
			cout<<"  ";
		}
		//bottom left number
		for(int j=n/2-i+1;j>=1;j--){
			cout<<j<<" ";
		}
		// space middle
		
		for(int j=1;j<=2*k-3;j++){
			cout<<"  ";
		}
		k--;
		// bottom right number
		for(int j=1;j<=n/2-i+1;j++){
			if(i!=n/2) cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}

/*

N is odd
Input:7
Output:
	  		1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1 

*/