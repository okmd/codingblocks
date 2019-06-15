#include <iostream>
using namespace std;
int main(){
	int num,i=2,j,prime;
	cout<<"Enter Number: ";
	cin>>num;
	while(i<=num){
		j=2;
		prime=1;
		while(j<i){
			if(i%j==0){
				prime=0;
				break;
			}
			j++;
		}
		i++;
		if(prime){
			cout<<j<<" is prime\n";
		}
	}
	return 0;
}