#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, bool> m;
    int arr[] ={3, 4, -3, 1, -4, 0, 0, -9, 11};
    int n = sizeof(arr)/sizeof(int);
    for(auto i=0; i<n; i++){
        if(m[0-arr[i]]){
            cout<<"Pair: "<<arr[i]<<", "<<0-arr[i]<<endl;
        }else
            m[arr[i]] = true;
    }

    return 0;
}

/*
Question: using hash table.
O(n) time.
    -> put all entries into hash table.
    -> search -entries in map, if exists then pair equals 0.
    -> +entries -entries = 0
*/