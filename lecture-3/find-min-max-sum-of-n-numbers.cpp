#include <iostream>
#include <climits> // INT_MIN and INT_MAX is defined here
using namespace std;
int main(){
	int n,i=1,sum=0,num;
	int max = INT_MIN;
	int min = INT_MAX;
	cin>>n;
	while(i<=n){
		cin>>num;
		if(num>max){
			max = num;
		}
		if(num<min){
			min = num;
		}
		sum +=num;
		i++;
	}
	cout<<"Sum is: "<<sum<<endl;
	cout<<"Max is: "<<max<<endl;
	cout<<"Min is: "<<min<<endl;
	return 0;
}