#include<bits/stdc++.h>
#include "02-build-and-insert-heap.cpp"
using namespace std;

void Heap::heapify(int i){
    int left = 2*i;
    int right = left+1;
    // assume minindex is i
    int minIndex = i;
    if(left < v.size() and compare(v[left], v[i])){
        minIndex = left;
    }
    if(right < v.size() and compare(v[right], v[minIndex])){
        minIndex = right;
    }

    if(minIndex!=i){//someone if min
        swap(v[i], v[minIndex]);
        heapify(minIndex);
    }
}
void Heap::pop(){
    int last = v.size()-1;
    swap(v[1], v[last]);
    v.pop_back();
    heapify(1);
}

int main(){
    Heap h(true); // false-max heap, true-min heap.
    h.push(5);
    h.push(15);
    h.push(2);
    h.push(20);
    h.push(3);
    //h.pop();
    //cout<<h.top()<<endl;
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }

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