#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n/2;i++){
		if(a[i] != a[n-i-1]){
			cout<<"false\n";
			return 0;
		}
	}
	cout<<"true\n";

	return 0;
}

/*
4
1
2
2
1
true



*/
