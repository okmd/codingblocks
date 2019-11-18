#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int n;
    priority_queue<int> max_pq; // left of median
    priority_queue<int, vector<int>, greater<int> > min_pq; // right of median
    while(scanf("%d", &n)!=EOF){
        if(max_pq.empty() and n!=-1){
            max_pq.push(n); // the very first element
        }else if(n==-1 and !max_pq.empty() and !min_pq.empty()){ // print the median till now
           if(max_pq.size() > min_pq.size()){
                cout<<max_pq.top();
            }else if(max_pq.size() == min_pq.size()){
                cout<<(max_pq.top() + min_pq.top())/2.0;
            }else{
                cout<<min_pq.top();
            }
            cout<<endl;
        }else if(max_pq.size() > min_pq.size()){
            if(n < max_pq.top()){
                min_pq.push(max_pq.top());
                max_pq.pop();
                max_pq.push(n);
            }else{
                min_pq.push(n);
            }
        }else if(max_pq.size() == min_pq.size()){
            if(n < max_pq.top()){
                max_pq.push(n);
            }else{
                min_pq.push(n);
            }
        }else{
            if(n > max_pq.top()){
                max_pq.push(min_pq.top());
                min_pq.pop();
                min_pq.push(n);
            }else{
                max_pq.push(n);
            }
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
Inp: 1 2 3 4 5 0 9 8 7 6 -1 4 5 6 99 10 -1
Out: 4.5 and 5
*/