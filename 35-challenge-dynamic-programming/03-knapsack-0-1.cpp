#include<bits/stdc++.h>
using namespace std;

int knapsack(int item_size[], int item_value[], int capacity, int n){
    if(n==0 or capacity==0) return 0;
    int included=0, excluded=0;
    if(item_size[n-1]<=capacity){ // choose only which can be accomodated in the capacity.
        // include the item
        included = item_value[n-1] + knapsack(item_size, item_value, capacity-item_size[n-1], n-1);
    }
    excluded =  knapsack(item_size, item_value, capacity, n-1);
    return max(included, excluded);
}
int bottom_up(int item_size[], int item_value[], int capacity, int n){
    int dp[100][100]={0};
    for(int i=0; i<=n; i++){
        for(int j=0; j<=capacity; j++){
            if(i==0 or j==0){
                dp[i][j]=0;
            }else{
                int included=0, excluded=0;
                if(item_size[i-1]<=j){
                    included = item_value[i-1] + dp[i-1][j-item_size[i-1]]; 
                }
                excluded = dp[i-1][j];
                dp[i][j] = max(included, excluded);
            }
        }
    }
    return dp[n][capacity];
}
int main(){
    int items, capacity;
    int item_size[1005], item_value[1005];
    cin>>items>>capacity;
    for(int i=0; i<items; i++){
        cin>>item_size[i];
    }
    for(int i=0; i<items; i++){
        cin>>item_value[i];
    }
    // cout<<knapsack(item_size, item_value, capacity, items);
    cout<<bottom_up(item_size, item_value, capacity, items);
    return 0;
}

/*
Maximum value that can be obtained optimally in given capacity.
e.g
5 4
1 2 3 2 2 
8 4 0 5 3
ans.
13
Note: greedy approach will fail when value/size (price/weight) ratio is used to select items.
e.g
3 10
7  4 4
15 8 8
Note: Every itmes has 2 possiblities include or not.
f[n,w] = max(size[n-1] + f[n-1, capacity-current_value], size[n-1] + f[n-1, capacity])
This is a 2D dp problem.
*/