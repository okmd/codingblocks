#include<bits/stdc++.h>
//#include<queue> <- heap or priority_queue.
//#include<functional>
//#include<vector>
using namespace std;

int main(){
    //priority_queue<int> pq; //max heap
    // input type
    //<int, vector<int>, comparator>
    priority_queue<int, vector<int>, greater<int> > pq; // min heap
    int  a[] = {5,6,17,18,9,11};
    int n = sizeof(a)/sizeof(int);
    // insert into queue
    for(int i=0; i<n; i++){
        pq.push(a[i]);
    }
    // Heap min or max
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}
