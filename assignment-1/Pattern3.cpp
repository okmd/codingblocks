#include<iostream>
using namespace std;
int main(){
	int n;//=76598321;
	cout<<"Enter N: ";
    cin>>n;
	int count=0, k=n;
	while(k){
		count++;
		k/=10;
	}
	k=n;
	for(int i=1;i<=count;i++){
		int j=i;
		while(j--){
			cout<<k%10<<" ";
			k/=10;
		}
		cout<<endl;
		k=n;
	}
	return 0;
}

/*

Input:76598321
Output:
1 
1 2 
1 2 3 
1 2 3 8 
1 2 3 8 9 
1 2 3 8 9 5 
1 2 3 8 9 5 6 
1 2 3 8 9 5 6 7

*/