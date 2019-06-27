#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
bool isPrime(int n){
	int i=2;
	if(n<=1)
		return false;
	
	while(i*i<=n){
		if(n%i++==0)
			return false;
	}
	return true;
}
bool compare(string a, string b){
	return a.length()>b.length() ;
}

int main(){
	int n,count=0;
	cin>>n;
	string s,p;
	vector <string> v;
	cin>>s;
	v.push_back(s);

	// generating all sub-sequence
	for(int i=0; i<n;i++){
		for(int j=i+1;j<n;j++){
			v.push_back(s.substr(i,j-i+1));
		}
	}
	//sort(v.begin(),v.end(), compare);
	// printing vector
	for(auto it=v.begin(); it<v.end();it++){
		if(isPrime(stoi(*it)))
			count++;
		//cout<<*it<<endl;
	}
	cout<<count;
	return 0;
}

/*

not complete

*/
