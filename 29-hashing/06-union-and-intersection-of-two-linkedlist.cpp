#include<bits/stdc++.h>
using namespace std;

void unionLL(list <int>LL1, list <int>LL2){
    unordered_map<int, bool> m;
    for(auto x:LL1){
        m[x] = true;
    }
    for(auto x:LL2){
        m[x] = true;
    }
    // now union
    for(auto x:m){
        cout<<x.first<<endl;
    }
    
}
void intersectionLL(list <int> LL1, list <int> LL2){
    unordered_map<int, bool> m;
    for(auto x:LL1){
        m[x] = true;
    }
    // if found the it is intersection
    for(auto x:LL2){
        if(m[x]){
            cout<<x<<endl;
        }
    }
}

int main(){
    list <int> l1, l2; 
    for(int i=0; i<10; i++)
        l1.push_back(i);
    for(int i=5; i<15; i++)
        l2.push_back(i);
    cout<<"Intersection: ";
    intersectionLL(l1, l2);
    cout<<"\nUnion: ";
    unionLL(l1,l2);

    return 0;
}
/*
O(n) time using hashing.
    -> put all in hash table.
    -> search each element in map if exists then it is intersection.
    -> put all keys in map of both lists only unique keys will be stored i.e union.

*/