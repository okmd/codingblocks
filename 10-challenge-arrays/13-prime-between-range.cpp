#include<iostream>
#include <cstring>
using namespace std;
// to check a number is prime or not o(root(n))
bool isPrime(int n){
	int i=2;
	if(n<=1)
		return false;
	
	while(i*i<=n){
		if(n%i++==0)
			return false;
	}
	return true;
}

int prime(int a, int b){
	int k=1,count=0;
	if(b<2)
		count = 0;
	else if(b==2)
		count = 1;
	else if(b==3)
		count = 2;
	else if(b>4 and b<7)
		count = 3;

	while(a > 6*k+1) k++;

	if(b>5){
		if(k==1)
			count += 2;
		while(6*k-1 <=b){
			if(isPrime(6*k-1) and 6*k-1<=b)
				count++;
			if(isPrime(6*k+1) and 6*k +1 <=b)
				count++;
			k++;
		}
	}
	return count;
}
int main(){
	int n,a,b;
	cin>>n;
	//cout<<isPrime(n);
	while(n--){
		cin>>a>>b;
		cout<<prime(a,b)<<endl;
	}
	return 0;
}

/*

Note: Prime numbers are always odd.
they follow 6k+1, 6k-1, from k=1,2,.....
from >=5.

2 3
5 7 11 13 17 19....

k=1
6*1 - 1 = 5
6*1 + 1 = 7
k=2
6*2 - 1 = 11
6*2 + 1 = 13
k=3
6*3 - 1 = 17
6*3 + 1 = 19

etc.




*/