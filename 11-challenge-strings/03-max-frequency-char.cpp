#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string s;
    char c;
    getline(cin,s);
    int n = s.length();
    int freq[26]={0}, max=0;
    for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
        if(freq[s[i]-'a']>max){
            max = freq[s[i]-'a'];
            c = s[i];
        }
    }
    cout<<c<<endl;

	return 0;
}

/*




*/
