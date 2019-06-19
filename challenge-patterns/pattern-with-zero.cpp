#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
		for(int j=1;j<i;j++){
			if(i==j+1) cout<<i<<" ";
			else cout<<0<<" ";
		}
		cout<<endl;
	}

    return 0;
}

/*

Input: 
    5
Output:
    1  
	2	2  
	3	0	3    
	4	0	0	4  
	5	0	0	0	5

*/