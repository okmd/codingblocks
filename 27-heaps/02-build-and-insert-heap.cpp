#include<bits/stdc++.h>
using namespace std;

class Heap{
    private:
        vector<int> v;
        bool minHeap;
        bool compare(int a, int b){
            if(minHeap)
                return a<b; // min heap
            else
                return a>b; // max heap
        }
    public:
        Heap(bool type=true){
            minHeap = type;
            // block the 0th index of vector. set -1
            v.push_back(-1);
        }
        void push(int value){
            // insert at last
            v.push_back(value);
            // take that elemet to correct position.
            int index = v.size() - 1; // last index
            int parent = index/2;
            while(index>1 and compare(v[index], v[parent])){
                swap(v[index], v[parent]);
                index = parent;
                parent /= 2;
            }
        }

        bool empty(){
            return v.size()==1;
        }
        int top(){
            if(empty()){
                cout<<"Empty\n";
                exit(0);
            }
            else
                return v[1];
        }
        void pop();
};

/*
Mapped binary tree to an array.
Implementing heap in 1-based index.
root(i) then left child 2*i and right child at 2*i + 1.
To insert the new element just check with the parent wheather it satisfy the heap property or not.
if not the swap with parent.

No. of steps to move elements = height of tree = O(log n)

*/