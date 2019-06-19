#include<iostream>
using namespace std;
int main() {
    int n,spaces;
    cin>>n;
    spaces = (n&1)? n+2: n+1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        for(int k=1;k<=spaces; k++){
            cout<<"  ";
        }
        for(int k=i;k>=1;k--){
            if(k!=n)
                cout<<k<<" ";
        }
        spaces -= 2;
        cout<<endl;
    }
	return 0;
}

/*

Input: 4
Output:
    1           1
    1 2       2 1  
    1 2 3   3 2 1
    1 2 3 4 3 2 1   

*/