#include <iostream>
using namespace std;
int main() {
    int n, line=4,k;
    int prev = 1;
    cout<<"Enter N: ";
    cin>>n;
    for(int i=1;i<=line;i++){
        k = n*prev;
        for(int j=1;j<=prev;j++){
            cout<<k++<<" ";
        }
        prev *=2;
        cout<<endl;
    }
    return 0;
}

/*

Input:7
Output:
7 
14 15 
28 29 30 31 
56 57 58 59 60 61 62 63

*/