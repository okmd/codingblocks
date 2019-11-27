#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll n, d, a;
    vector<ll> v;
    cin>>n>>d;
    for(ll i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int res=0;
    for(ll i=0; i<n; i++){
        if(v[i+1] - v[i] <= d){
            res++;
            i+=2;
        }else
            i++;
    }
    cout<<"Pairs are: "<<res<<endl;
    return 0;
}
/*
1hr50min
Question: TACHSTCK on SPOJ.
    -> sort array
    -> make pair with nearest element.
    -> if pair can be found then count++ else skip.

*/