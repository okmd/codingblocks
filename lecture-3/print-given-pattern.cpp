#include <iostream>
using namespace std;
/*
n=4

1
23
456
78910
*/
int main(){
	int n,i,j,k=1;
	cout<<"Enter Number: ";
	cin>>n;
	i=1;
	while(i<=n){
		j=1;
		while(j<=i){
			cout<<k++<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}