#include <iostream>
using namespace std;

void findUnique(int a[], int n){
	int i = 0, first = 0, second = 0, result = 0;
	// xor all array
	for(int i=0;i<n;i++){
		result^=a[i];
	}
	//get the set bit
	int temp = result;
	while(temp){
		if(temp&1){ //!=0, last bit is 1 or odd number
			break;
		}
		i++;
		temp >>=1;
	}
	// create the mask
	int mask = (1<<i);
	// find first no
	for(int i=0;i<n;i++){
		if(mask&a[i]){//!=0
			first^=a[i];
		}
	}
	// find second no
	second = result^first;
	cout<<"1st: "<<first<<" 2nd: "<<second<<endl;
}

int main(){
	int n;//=8;
	cin>>n;
	int a[n];//={1,3,5,6,3,2,1,2};
	// enter numbers
	for(int i=0;i<n;i++)
		cin>>a[i];
	// find unique
	findUnique(a,n);
	
	return 0;
}

/*

why we are xoring with numbers which do not give 0 with mask?

Problem: find unique pair in duplicate numbers of array.

e.g

arr = [1,1,2,2,3,3,5,7]
n=8
result = 1^1^2^2^3^3^5^7 = 5^7 == 010
calculate set bit index in result = i =1
maske 1<<1 == 010
get all numbers which have 1 at 1 index = 2,2,7
first number is xor of all such numbers = 2^2^7 = 7
second is result^first = 5^7^7 = 5
so, answer is 7 and 5.



// binary representation
1	001
2	010
3	011
5	101
7	111


*/