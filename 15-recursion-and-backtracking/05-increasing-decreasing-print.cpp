#include <iostream>
using namespace std;
void inc(int n){ // O(lon2(b)) steps
	if(n==0) return;
	inc(n-1);
	cout<<n<<" ";
}

void dec(int n){ // O(lon2(b)) steps
	if(n==0) return;
	cout<<n<<" ";
	dec(n-1);

	// if(n==1) cout<<1;
	// else{
	// 	cout<<n<<" ";
	// 	dec(n-1);
	// }
}

int main(){
	int n;
	cin>>n;
	inc(n);
	cout<<endl;
	dec(n);
	cout<<endl;
	return 0;
}

/*

Inc(5): 1 2 3 4 5
Dec(5): 5 4 3 2 1
*/
