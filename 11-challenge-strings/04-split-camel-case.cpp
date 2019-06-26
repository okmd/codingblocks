#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string s;
    getline(cin,s);
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]>=65 and s[i]<=65+26)
            cout<<endl;
        cout<<s[i];
    }

	return 0;
}

/*
IAmACompetitiveProgrammer
I
Am
A
Competitive
Programmer




*/
