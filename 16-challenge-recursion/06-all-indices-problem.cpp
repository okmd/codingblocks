#include <iostream>
#include <cstring>
using namespace std;

int indices(int a[], int b[], int n, int m){
	if(n==-1) return 0;

	int i = indices(a, b, n-1, m);

	if(a[n] == m) 
		b[i++] = n;

	return i;
}

int main(){
	int n, m;
	cin>>n;
	int a[n];
	int b[n] ={0};
	for(int i=0; i<n; i++)
		cin>>a[i];
	cin>>m;
	
	n=indices(a, b, n-1, m);

	for(int i=0; i<n; i++)
		cout<<b[i]<<" ";
	cout<<endl;
	return 0;
}

/*

Input:
5 = n
3
2
1
2
3
2 = m
Output:	1 3

*/