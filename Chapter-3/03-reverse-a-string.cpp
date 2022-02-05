#include<iostream>
#include<string>
using namespace std;

string apporach1(string s){
	string a="";
	int n = s.length();
	for(int i=n-1;i>=0; i--)
		a += s[i];			// every time new string is created, immutable string.
	return a;
}

string apporach2(string s){
	int n = s.length();
	string a;
	for(int i=n-1; i>=0; i--)
		a.push_back(s[i]);		// no overhead to create new string.
	return a;

}

int main(){
	string a;
	getline(cin, a);
	cout<<apporach1(a)<<endl;
	cout<<apporach2(a)<<endl;

	return 0;
}

/*


*/