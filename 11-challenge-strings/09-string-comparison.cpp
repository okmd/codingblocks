#include<iostream>
#include<cstring>
using namespace std;

void frequencyPrint(string s){
	int freq[256]={0}, k;
	// calculate frequency
	for(int i=0;i<s.length();i++){
		freq[s[i]-'A']++;// save frequency from A-Z, a-z etc
	}
	// print 
	for(int i=0;i<s.length();){
		k = freq[s[i]-'A']; //get count of current letter
		cout<<s[i]<<k; // print letter and its count
		i+=k; // move to next letter in string
	}
}

void continuous(string s){
	char prev;
	int count = 1,i=0;
	prev = s[i];
	while(s[i]!='\0'){
		i++;
		if(s[i]==prev){
			count++;
		}else{
			cout<<s[i-1]<<count;
			prev = s[i];
			count = 1;
		}
	}
}

int main(){
	string s;
	char prev;
	getline(cin,s);

	continuous(s);
	cout<<endl;
	frequencyPrint(s);

	
	return 0;
}

/*
Input: aabbcdeaa
conti: a2b2c1d1e1a2
frequ: a4b2c1d1e1a4

*/
