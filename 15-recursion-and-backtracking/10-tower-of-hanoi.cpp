#include <iostream>
using namespace std;
void toh(int n, char sour, char dest, char help){

	if(n==0) return;

	// recursive calls
	// move n-1 to help from source.
	toh(n-1, sour, help, dest);
	cout<<"Move "<<n<<" disks from "<<sour<<" to "<<dest<<endl;
	// revert back to source from helper
	toh(n-1, help, dest, sour);

}


int main(){
	int n;
	cin>>n;
	toh(n, 'A', 'B', 'C');
	cout<<endl;
	return 0;
}

/*
Problem: search element index or -1 if not present.

*/
