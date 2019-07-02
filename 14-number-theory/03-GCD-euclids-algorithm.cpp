#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"GCD: "<<gcd(a,b)<<endl;
	cout<<"LCM: "<<a*b/gcd(a,b)<<endl;
	return 0;
}

/*

GCD(a,b) = GCD(b,a%b)
GCD(a,0) = a

Property: a*b = gcd(a,b) * lcm(a,b)


*/