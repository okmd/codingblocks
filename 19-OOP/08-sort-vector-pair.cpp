#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void print(vector<pair<string, int>> v){
	for(auto pr: v){
		cout<<pr.first<<" : "<<pr.second<<endl;
	}
}
bool mycompare(pair<string, int> p1, pair<string, int> p2){
	return p1.first < p2.first; // lexicographically
	//if same length
	//if(p1.first.length() == p2.first.length())
	//	return p1.first < p2.first;

	
}
bool price(pair<string, int> p1, pair<string, int> p2){
	return p1.second < p2.second;
}

int main(){
	vector<pair<string, int>> v;
	int n,p;
	cin>>n;

	for(int i=0; i<n; i++){
		string s;
		cin>>s;
		cin>>p;
		v.push_back(make_pair(s,p));
	}
	cout<<"Before: \n";
	print(v);
	sort(v.begin(), v.end(), mycompare);
	cout<<"After: \n";
	print(v);

	return 0;
}