#include<iostream>
using namespace std;
int main() {
	int n,k=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		//spaces
		for(int j=1;j<=(n/2+1)-k;j++)
			cout<<"  ";
		//stars
		for(int j=1;j<=2*k-1;j++)
			cout<<"* ";
		(i>=n/2+1)? k--:k++;
		cout<<endl;
	}
	
    return 0;
}

/*

Input: 
    5
Output:
	* 
  * * * 
* * * * * 
  * * * 
    * 


*/
