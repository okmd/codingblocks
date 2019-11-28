
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    // start, end time
    return a.second < b.second;
} 


int main(){
    vector<pair<int, int> > pt;
    int n, c, r, t, start, end, res=1;
    cin>>n;
    t=n;
    while(t--){
        cin>>c>>r;
        start = c-r; // starting point of circle
        end = c+r; // ending point of circel.
        pt.push_back(make_pair(start, end));
    }
    // 1. sort the by end point
    sort(pt.begin(), pt.end(), cmp);
    // 2. 
    int fin = pt[0].second; // circle with least end point.
    for(int i=1; i<pt.size(); i++){
        if(pt[i].first >= fin){ // if not collide
            fin = pt[i].second;
            res++;
        }
    }
    cout<<n-res<<endl;
    return 0;
}
/*
Question: Minimum circle to remove so that no circle overlaps.
Starting point: c-r
Ending point : c+r
Now the problem has become the activity selection problem (02).
Input:
4
1 1
2 1
3 1
4 1
Output:
2
*/