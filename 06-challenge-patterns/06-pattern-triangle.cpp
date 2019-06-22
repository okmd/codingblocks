#include <iostream>
using namespace std;

int main(){
	int n,row,col,val;
	cin>>n;
	row=1;
	while(row<=n){
		col = 1;
		// spaces
		while(col++<=n-row){
			cout<<"  ";
		}
		col=1;
		val = row;
		// values increasing
		while(col++<=row){
			cout<<val++<<" ";
		}
		// decreasing
		while(val-2>=row){
			cout<<val-2<<" ";
			val--;
		}
		row++;
		cout<<endl;
	}

	return 0;
}

/*


Input:4
Output:
	  1 
	2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4

*/