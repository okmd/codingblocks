#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
bool isPrime(int n){
	int i=2;
	if(n>2 and n%2==0) return false;
	if(n>3 and n%3==0) return false;
	if(n<=1)
		return false;
	
	while(i*i<=n){
		if(n%i++==0)
			return false;
	}
	return true;
}

int main(){
	int n, count=0,k;
	string numeric_string;
	vector <string> sub_strings;
	int arr[10]={0};
	cin>>n;
	cin>>numeric_string;
	sub_strings.push_back(s);

	// generating all sub-sequence
	for(int i=0; i<n;i++){
		for(int j=i+1;j<=n;j++){
			sub_strings.push_back(s.substr(i,j-i));
		}
	}

	for(auto it=sub_strings.begin(); it<sub_strings.end();it++){
		if(isPrime(stoi(*it))){
			for(int i=0;i<*it.length();i++){
				k = *it[i]-'0';
				if
				arr[k]++
			}
		}
	}
	
	cout<<count;
	return 0;
}

/*

not complete

*/
