#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, bool> m;
    int arr[] ={3, 4, -3, 1, -4, 0, 0, -9, 1};
    int n = sizeof(arr)/sizeof(int);
    for(auto i=0; i<n; i++){
        m[arr[i]] = true;
    }
    // print
    for(auto x:m){
        cout<<x.first<<" ";
    }

    return 0;
}

/*
O(n) time and memory using hashmap;
    -> store the elements in map.
    -> duplicates will be stored once.
*/