#include<iostream>
using namespace std;
int main(){
	int n,l,k=1;
	cout<<"Enter N: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			l=k+i-1;
		}
		for(int j=1;j<=2*i-1;j++){
			if(j%2==0){
				cout<<"*";
			}
			else if(i%2==0){
				cout<<l--;
				k++;
			}else
				cout<<k++;
		}
		cout<<endl;
	}	
	return 0;
}

/*

Input:5
Output:
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15

*/