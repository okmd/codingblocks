#include<bits/stdc++.h>
#include "02-build-and-insert-heap.cpp"
using namespace std;

void Heap::pop(){
    // to be continued..
}

int main(){
    Heap h(false); // false-max heap, true-min heap.
    h.push(5);
    h.push(15);
    h.push(2);
    h.push(20);
    h.push(3);
    h.pop();
    cout<<h.top()<<endl;

    return 0;
}

/*
Mapped binary tree to an array.
Implementing heap in 1-based index.
root(i) then left child 2*i and right child at 2*i + 1.
1. To remove the element swap the first and last element.
2. Pop the last element.
3. Heapify -> swap the elements with the childs to maintain the heap property
    from top to bottom.

No. of steps to move elements = height of tree = O(log n)

*/