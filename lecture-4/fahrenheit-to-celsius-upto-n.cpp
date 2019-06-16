#include <iostream>
using namespace std;

int main(){
	int start=0, end;
	cout<<"Enter max number: ";
	cin>>end;
	while(start<=end){
		cout<<start<<" "<<(int)((5/9.0)*(start-32))<<endl;
		start +=20;
	}
	

	return 0;
}

/*

Input:
	Enter max number: 300
Output:
	0 -17
	20 -6
	40 4
	60 15
	80 26
	100 37
	120 48
	140 60
	160 71
	180 82
	200 93
	220 104
	240 115
	260 126
	280 137
	300 148

*/