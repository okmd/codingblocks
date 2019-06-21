#include<iostream>
using namespace std;
int main(){
	int n,start,stop;
    cin>>n;
    start = (n&1)?n:n-1;
    stop = (n&1)?n-1:n;
    while(start>=1){
    	cout<<start<<endl;
    	start -=2;
    }
    while(-1*start<=stop){
    	cout<<1-start<<endl;
    	start -=2;
    }
	
	return 0;
}

/*


Input:10
Output:
9

7

5

3

1

2

4

6

8

10
*/