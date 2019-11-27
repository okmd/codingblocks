#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, c, n, k;
    cin>>t;
    while(t--){
        float sum=0.0, imbalance = 0.0;
        vector<int> v;
        cin>>c>>n;
        int zeros =2*c - n;

        while(zeros--)
            v.push_back(0); // insert 0 at the begining

        for(int i=0; i<n; i++){
            cin>>k;
            sum += k;
            v.push_back(k);
        }

        // calculate mean
        float mean = sum/c;

        // sort and append 0 to make array size 2c
        sort(v.begin(), v.end());

        // canculate imbalance
        for(int i=0; i<c; i++){
            imbalance += abs(v[i] + v[2*c-i-1] - mean);
        }

        cout<<"Imbalance is: "<< imbalance<<endl;

    }
}
/*
1hr10min
Question: Find imbalance as the sum of difference between the avg. value of all chambers and ith chamber.
There are c chamber for each space station.
Can cantain 0,1,2 specimen i.e atmost 2.

Input:
3                   <- test case
2 3                 <- chamber(c), specimens(n)
6 3 8               <- all n specimen value       
3 5
51 19 27 14 33
5 9
1 2 3 5 7 11 13 17 19
Output:
Imbalance: 1
6
11.6

Note: atmost 2 specimen can be put in a chamber.

Solution:
    -> sort the array
    -> append the zeros at the starting and make the array length 2C.
    -> pick 1st and last and start putting in each chamber.
        (1, n), (2, n-1), (3, n-2) ....
    -> this configuraton will have minimum imbalance.
*/