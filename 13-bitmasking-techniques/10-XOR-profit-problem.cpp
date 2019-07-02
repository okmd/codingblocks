#include <iostream>
using namespace std;
int main(){
	int a,b, maxx=0,x,y;
	cin>>a>>b;
	x=a,y=b;
	while(a<=b){
		maxx = max(maxx,a^b);
		b--;
	}
	a=x, b=y;
	while(a<=b){
		maxx = max(maxx,a^b);
		a++;
	}
	cout<<maxx<<endl;
	return 0;
}