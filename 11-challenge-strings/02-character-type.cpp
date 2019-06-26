#include<iostream>
using namespace std;
char f(char c){
	if('A'<=c and c<='Z')
    	return 'U';
    else if('a'<=c and c<='z')
    	return 'L';
    else
    	return 'I';
}
int main(){
	char c;
    cin>>c;
    cout<<f(c);
	return 0;
}

/*

65<= ch <= 65 + 26 uppercase
90 <= ch <= 90+26 lowercase
else Invalid


*/
