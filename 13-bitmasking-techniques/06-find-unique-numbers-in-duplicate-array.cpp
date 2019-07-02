#include <iostream>
using namespace std;
int findUnique1(int a[], int n){
	int result  = 0;
	for(int i=0;i<n;i++)
		result ^= a[i];

	return result; 
}

void findUnique2(int a[], int n){
	int i = 0, first = 0, second = 0, result = 0;
	// xor all array
	result = findUnique1(a,n);
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

int findUnique3(int a[], int n){
	int cnt[64]={0};
	int ans = 0, p = 1;
	for(int i=0;i<n;i++){
		// extract bit and count and update
		int j=0;
		int no = a[i];
		while(no){
			cnt[j++] += (no&1); // for 6, 110 array will have 011
			no >>= 1;
		}
	}
	// take mod 3 of array
	for(int i=0;i<64;i++){
		cnt[i] %= 3;
		ans +=  cnt[i]*p; // mutiplying each bit to its place value to get decimal value.
		p <<= 1;// multiply by 2; 1,2,4,8,16..; place value
	}

	return ans;
}

int main(){
	int n;//=8;
	cin>>n;
	int a[n];//={1,3,5,6,3,2,1,2};
	// enter numbers
	for(int i=0;i<n;i++)
		cin>>a[i];
	// find unique
	//cout<<findUnique1(a,n)<<endl;
	//findUnique2(a,n);
	cout<<findUnique3(a,n)<<endl;
	
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