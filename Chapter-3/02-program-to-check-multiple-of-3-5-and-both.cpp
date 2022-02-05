#include<iostream>
using namespace std;

int main(){
	for(int n=1; n<=100; n++){
		if(n%3==0 and n%5==0)
			cout<<"FizzBuzz\n";
		else if(n%3==0)
			cout<<"Fizz\n";
		else if(n%5==0)
			cout<<"Buzz\n";
		else
			cout<<n<<endl;
	}
	
	return 0;
}

/*


*/