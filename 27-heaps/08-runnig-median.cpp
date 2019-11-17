#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int n;
    priority_queue<int> max_pq; // left of median
    priority_queue<int, vector<int>, greater<int> > min_pq; // right of median
    while(scanf("%d", &n)!=EOF){
        if(n==-1){// print median till now.
            // to be continued....!
        }
    }
    return 0; 
} 

/*
Question: From stream of running numbers find median at any time.

Method 1: Put all arrays into single array and sort and get middle element.
Method 2: Take 2 heaps one min and one max.
    -> max heap left of median
    -> min heap right of median
    -> heap should be balance i.e
        left heap       right heap <- should have elements
            N               N      <- avg. of top of both heap is median
            N+1             N      <- top of left heap is median
            N               N+1    <- top of right heap is median
    -> if not balanced then move top of heap to required side.
*/