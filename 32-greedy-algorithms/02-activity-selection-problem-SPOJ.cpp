#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    // start, end time
    return a.second < b.second;
} 

int main(){
    int t, n, s, e, res;
    cin>>t;
    while(t--){
        res = 1;
        vector<pair<int, int> >activity;// start, end time
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>s>>e; // start and end time.
            activity.push_back(make_pair(s, e));
        }
        // 1. sort the activity, by finishing time
        sort(activity.begin(), activity.end(), cmp);
        // 2. 
        int fin = activity[0].second; // activity with least finish time.
        for(int i=1; i<activity.size(); i++){
            if(activity[i].first >= fin){ // if not collide
                fin = activity[i].second;
                res++;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}

/*
Ques: maximum no. non-overlapping activities.
given Activity and its time range.
e.g GYM - 7 - 9 AM etc.

1. sort based on ending time(finishes early).
2. pick an activity which gives more time to other.


*/