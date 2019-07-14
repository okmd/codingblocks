#include <iostream>
#include <cstring>

using namespace std;
bool f = true;
void replace(string in, string out, int n){
	if(n==0) return;
	replace(in, out, n-1);
	if(in[n-1]== 'p' and in[n] == 'i'){
		//out.append("3.14");// 1 times 3.14
		cout<<"3.14";
		f = false;
	}
	else if(f){
		cout<<in[n-1]; 
		//out.append(1, in[n-1]);
	}
	else if(!f) 
		f = true;

	if(n==in.length()-1){
		//out.append(1,in[n]);
		cout<<in[n];
	}

}

int main(){
	int t;
	string in,out;
	cin>>t;
	while(t--){
		cin>>in;
		replace(in, out, in.length()-1);
		cout<<out;
		cout<<endl;
	}
	return 0;
}

/*

Input:
3
xpix
xabpipxx3.15x
xpipippixx

Output:
x3.14x
xab3.14pxx3.15x
x3.143.14p3.14xx

*/