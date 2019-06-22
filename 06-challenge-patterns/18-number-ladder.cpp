#include<iostream>
using namespace std;
int main(){
	int n,k=1;
    cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n;j>=n-i+1;j--){
			cout<<k++<<" ";
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
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/