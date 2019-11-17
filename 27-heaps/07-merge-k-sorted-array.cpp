#include <bits/stdc++.h> 
using namespace std; 

/*
Question: Given K sorted array, need to merge into single array.

Method 1: Put all arrays into single array and sort.
Method 2: Make min heap of size k.  O(knlogkn).
    -> take k pointers for each array.
    -> insert min element from them to heap.
    -> take top from heap and insert into the kn size array or print.
    -> if one of the array finishes then inset maxint or inf.


*/