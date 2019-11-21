#include<bits/stdc++.h>
using namespace std;

bool findCycle(node *head){
    node* temp = head;
    unordered_map<node*, bool> m;
    while(temp){
        if(m[temp]){ // if already present
            cout<<"Cycle is present\n";
            return true;
        }
        m[temp] = true; // store node as visited
        temp = temp->next;
    }
    return false;
}

/*
O(n) time and memory using hashmap;
    -> store the node address in map.
    -> if any address is found in the map then cycle is present.
Note: This method is not better than floyd cycle detection algorithm.
Try running with LL class code.
*/