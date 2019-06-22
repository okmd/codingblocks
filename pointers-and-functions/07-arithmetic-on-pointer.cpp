#include <iostream>
using namespace std;


int main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	int sum=0, i=0;
	while(i<3){
		sum+=*(*(arr+i) + (i++));

	}
	cout<<sum<<endl;
	return 0;
}

/*

[0]=>[1,2,3]
[1]=>[4,5,6]
[2]=>[7,8,9]



i=0 =>	(arr+0)+0 => [0][0] => 1
i=1 =>	(arr+1)+1 => [1][1] => 5
i=2 =>	(arr+2)+2 => [2][2] => 9

sum = 15
*/