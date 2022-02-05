#include<iostream>
#include<string>
using namespace std;



int main(){
	string s;
	cin>>s;
	int count = 0;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='(')
			count++;
		else{
			count--;
			if(count<0)
				break;
		}
	}
	if(!count)
		cout<<"Balance\n";
	else
		cout<<"Not Balance\n";

	return 0;
}

/*
()() -> balcance

((	-> not balance

)( -> not balance

*/