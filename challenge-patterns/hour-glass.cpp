#include<iostream>
using namespace std;
int main(){
	int n, spaces=0,j;
    cin>>n;
	for(int i=1;i<=2*n+1;i++){
		// space
		for(j=1; j<=spaces;j++){
			cout<<"  ";

		}
		// left num
		for(j=n-spaces; j>=0;j--){
			cout<<j<<" ";

		}
		// right num
		for(j=j+2; j<=n-spaces;j++){
			cout<<j<<" ";

		}
		if(i<=n) spaces++;
		else spaces--;
		cout<<endl;
	}
	return 0;
}

/*


Input:5
Output:
 5 4 3 2 1 0 1 2 3 4 5
   4 3 2 1 0 1 2 3 4 
     3 2 1 0 1 2 3 
       2 1 0 1 2 
         1 0 1 
           0 
         1 0 1 
       2 1 0 1 2 
     3 2 1 0 1 2 3 
   4 3 2 1 0 1 2 3 4 
 5 4 3 2 1 0 1 2 3 4 5
*/