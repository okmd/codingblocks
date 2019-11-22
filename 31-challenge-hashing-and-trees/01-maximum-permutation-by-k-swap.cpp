#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void print(ll arr[], ll n){
    // print
    for(ll i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void kSwap(unordered_map<ll, ll> &m, ll arr[], ll n, ll k){
    int best_index, orig_index;
    for(ll num=n; num>=1 and k; num--){
        best_index = n-num;
        orig_index = m[num];
        if(best_index!=orig_index){
            // update map
            m[arr[best_index]] = orig_index;
            m[arr[orig_index]] = best_index;
            // swap
            swap(arr[best_index], arr[orig_index]);
            // decrease swap number
            k--;
            //NOTE: MAINTAIN THE ORDER 1.UNDATE MAP , 2. SWAP VALUE.
        }
    }
}

int main(){
    ll n, k;
    unordered_map<ll, ll> m;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        // psuh into hash map
        m[arr[i]] = i; // value->index as there are 1-N numbers i.e unique.
    }
    kSwap(m, arr, n, k);
    print(arr, n);
    
    return 0;
}
/*
Question: make largest permutation of given array using atmost k swaps.
    -> maintain a hashmap [value->index] of array
    -> loop from N to 1 and place to its best place.
    -> update the map accordingly.

*/