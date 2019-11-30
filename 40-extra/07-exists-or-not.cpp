#include<iostream>
#include <unordered_map>
using namespace std;

int main(){
	int t,n,m,q;
	cin>>t;
	while(t--){
		unordered_map<int, bool> st;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
			st[arr[i]]=true;
		}
		cin>>m;
		for(int i=0; i<m;i++){
			cin>>q;
			if(st[q])
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}


	}
	return 0;
}