
#include<bits/stdc++.h>
using namespace std;

int main(){
    int amount, n=10;
    cin>>amount;
    int denominations[] = {1,2,5,10,20,50,100,200,500,2000};
    cout<<"Denominations: ";
    for(int i=n-1; i>=0; i--){
        while(amount >= denominations[i]){  
            amount -= denominations[i];
            cout<<denominations[i]<<", ";
        }
    }
    return 0;
}
/*

Question: [indian denomination]
Few note and coins needed to make k amount of money.
e.g. k=39
Rs 10 note, to make 29
Rs 10 note, to make 19
Rs 10 note, to make 9
Rs 5 note, to make 4
Rs 2 coin, to make 2
Rs 2 coin, to make 0
*/