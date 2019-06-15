#include <iostream>
using namespace std;
int main(){
	int n,i=1,sum=0,num;
	cin>>n;
	while(i<=n){
		cin>>num;
		sum +=num;
		i++;
	}
	cout<<"Sum is: "<<sum<<endl;
	return 0;
}