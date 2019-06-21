#include <iostream>
using namespace std;

int main() {
    int n,max=1000000000,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a>max){ // if we get large value than previous
            max=a;
            break;
        }
        max=a;            
    }
    while(n--)
    {
        cin>>a;
        if(a<max){ // if decreasing 
            cout<<"false\n";
            return 0;
        }
        max=a;  
    }
    cout<<"true\n";
    return 0;
}

/*

Input: 
    5

    1
    2
    3
    4
    0
Output:
    3

*/
