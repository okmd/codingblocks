#include<iostream>
using namespace std;
int main(){
	int n,k,m;
    cin>>n;
    n=2*n-1;
    m=n/2;
	for(int i=1;i<=m+1;i++){
		if(i==1){
			for(int j=1;j<=n;j++){
				cout<<"* ";
			}
		}else{
			// left num
			for(int j=1;j<=m-i+2;j++){
				cout<<"* ";
			}
			// spaces
			for(int j=1;j<=2*i-3;j++){
				cout<<"  ";
			}
			// right num
			for(int j=1;j<=m-i+2;j++){
				cout<<"* ";
			}
		}
		cout<<endl;
	}
	for(int i=m-1;i>=0;i--){
		if(i==0){
			for(int j=1;j<=n;j++){
				cout<<"* ";
			}
		}else{
			// left num
			for(int j=1;j<=(n-(2*i-1))/2;j++){
				cout<<"* ";
			}
			// spaces
			for(int j=1;j<=2*i-1;j++){
				cout<<"  ";
			}
			// right num
			for(int j=1;j<=(n-(2*i-1))/2;j++){
				cout<<"* ";
			}
		}
		cout<<endl;
	}
	return 0;
}

/*
not correct
Input:5
Output:
	* * * * * 
	* *   * * 
	*       * 
	* *   * * 
	* * * * * 

Input: 9
Output:
	* * * * * * * * *
	* * * *   * * * *
	* * *       * * *
	* *           * *
	*               *
	* *           * *
	* * *       * * *
	* * * *   * * * *
	* * * * * * * * *
*/