#include <iostream>
using namespace std;

int main(){
	int n,row,col,val;
	cout<<"Enter number: ";
	cin>>n;
	row=1;
	while(row<=n){
		col = 1;
		while(col++<=n-row){
			cout<<" ";
		}
		col=1;
		val = row;
		while(col++<=row){
			cout<<val++;
		}
		while(val-2>=row){
			cout<<val-2;
			val--;
		}
		row++;
		cout<<endl;
	}

	return 0;
}

/*
Input:5
Output:

    1
   232
  34543
 4567654
567898765

*/