/*
Priority Queue alias Heap.
Application
    finding min/max
    finding large priority element first.

Time analysis
operation   |    Heap    |   Sorted array    | Unsorted array
--------------------------------------------------------------
insert      |    O(logn) |        O(N)       |     O(1)
get         |    O(1)    |        O(N)       |     O(N)
delete      |    O(logn) |        O(N)       |     O(N)

Propery of heap:
    1. Complete binary tree. All levels are complete except last level.
    If last level are partially filled then it should be filled from left to right.

    2. Heap order property. 
    
    For min-heap. root <= childrens.
    For max-heap. root >= childrens.
*/