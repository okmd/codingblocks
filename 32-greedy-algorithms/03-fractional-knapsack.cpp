#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    // pair is price, weight
    return (a.first/a.second) > (b.first /b.second);
}

int fractionalKS(vector<pair<int, int> > pt, int capacity){
    // pair is price, weight
    sort(pt.begin(), pt.end(), cmp);
    int curr_capacity =0;
    int result=0;
    for(int i=0; i<pt.size(); i++){
        if(curr_capacity + pt[i].second <= capacity){
            curr_capacity += pt[i].second;
            result += pt[i].first;
        }else{
            int remain = capacity - curr_capacity;
            result += pt[i].first *((double)remain/pt[i].second);
            break;// bag full
        }
    }
    return result;
}

int main(){
    vector<pair<int, int> > pt; // pair price, weight
    int n, p, w, capacity;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p>>w;
        pt.push_back(make_pair(p, w));
    }
    cin>>capacity;
    // sort 
    int profit = fractionalKS(pt, capacity);
    cout<<"Maximum Profit: "<<profit<<endl;
    
    
}

/*
Question: max profit that can be achieved from atmost 6kgs.
Available:
Laddus -> 3Kg, total cost 90 rupee.
Gulab jamun -> 5Kg, total cost 100 rupee.
Burfi -> 2Kg, total cost 200 rupee.
    => sort the item by price/qty value.(per kg)
    => pick from highest value.

0/1 knapsack and fractional knapsack: in 0/1 either choose or not.
Input:
3 <- inputs
90 3 100 5 200 2 three pairs (price, weight)
6 <- bag capacity

Output: Maximum profit: 310
*/