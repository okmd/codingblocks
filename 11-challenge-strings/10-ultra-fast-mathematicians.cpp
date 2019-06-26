#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int t,len;
	string a,b;
	cin>>t;
    cin.ignore(); // ignore new line char
	while(t--){
        a.erase(a.begin(),a.end());
		getline(cin,a,' ');
        b.erase(b.begin(),b.end());
		getline(cin,b);
		len = a.length();
		while(len--){
			a[len] = (a[len]==b[len])?'0':'1';
		}
		//print
		cout<<a<<endl;

	}

	
	return 0;
}

/*
if same bit then 0 else 1

*/
