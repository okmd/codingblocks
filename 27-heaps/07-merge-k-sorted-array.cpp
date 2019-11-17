#include <bits/stdc++.h> 
using namespace std; 

typedef pair<int, pair<int, int> > ppi; 

int main(){ 
    vector<vector<int> > mat{ {0, 4, 10, 12}, 
                              {1, 3, 5, 7}, 
                              {2, 4, 12, 15, 20} }; 
    vector<int> res; 
    priority_queue<ppi, vector<ppi>, greater<ppi> > pq; // min heap of pair
  
    for (int i=0; i< mat.size(); i++) 
        pq.push({ mat[i][0], { i, 0 } }); // frist element of each array into heap
    while (!pq.empty()) { 
        ppi curr = pq.top(); 
        pq.pop();        
        int i = curr.second.first; // which array i.e index of array  
        int j = curr.second.second;  // index with-in ith array
        res.push_back(curr.first); // push min value of heap  
        if (j+1 < mat[i].size()) // remaining elements of same array
            pq.push({ mat[i][j+1], {i, j+1}}); 
    } 
    // result
    cout<<"Result after merging: "; 
    for (auto x : res) 
        cout << x << " "; 
  
    return 0; 
} 

/*
Question: Given K sorted array, need to merge into single array.

Method 1: Put all arrays into single array and sort.
Method 2: Make min heap of size k.  O(knlogkn).
    -> take k pointers for each array.
    -> insert min element from them to heap.
    -> take top from heap and insert into the kn size array or print.
    -> if one of the array finishes then inset maxint or inf.
*/