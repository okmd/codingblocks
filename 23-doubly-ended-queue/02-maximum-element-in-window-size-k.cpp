#include <bits/stdc++.h>
using namespace std;
//#Note: challenging Problem (Spoj) https://www.spoj.com/problems/ARRAYSUB/cstart=30
int main() { 
    int n,k,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k; // window size

    deque<int> Q(k);
    // first k element
    for(i=0;i<k;i++){
        while(!Q.empty() and arr[i]>arr[Q.back()]){
            Q.pop_back();
        }
        Q.push_back(i); // store index
    }
    // remaining part 
    for(; i<n; i++){
        cout<<arr[Q.front()]<<" ";
        //1. Remove outside points(Contraction)
        while(!Q.empty() && (Q.front()<=k-i))
            Q.pop_back();
        //2. Remove not usefull and in window
        while(!Q.empty() && arr[i]>=arr[Q.back()])
            Q.pop_back();
        //3. Add the new elements(Expansion)
        Q.push_back(i);
    }
    cout<<arr[Q.front()]<<endl;

    return 0; 
} 

/*
Given an array of length N, and need to find max in Window K.
*/