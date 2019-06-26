#include<iostream>
using namespace std;
int main(){
	char c;
    cin>>c;
    if('A'<=c and c<='Z')
    	cout<<"UPPERCASE\n";
    else if('a'<=c and c<='z')
    	cout<<"lowercase\n";
    else
    	cout<<"Invalid\n";

	return 0;
}

/*

65<= ch <= 65 + 26 uppercase
90 <= ch <= 90+26 lowercase
else Invalid


*/
