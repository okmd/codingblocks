#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		a[i] = n-i;
	}
	//start time
	clock_t st = clock();
	sort(a,a+n);// time of function call
	clock_t et = clock();
	// end time
	cout<<et-st<<" mili seconds";
	// for(int i=0; i<n; i++){
	// 	cout<<a[i]<<" ";
	// }
	cout<<endl;
	return 0;
}

/*


*/