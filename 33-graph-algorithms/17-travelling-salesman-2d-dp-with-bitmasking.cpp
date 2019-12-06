#include<bits/stdc++.h>
using namespace std;

int n=4;
int dp[16][4]; //2^n and n; total no. of distinct values a dp can take.
int visited_all = (1<<n) -1; // mask 2^n -1

int dist[10][10]={
    {0, 20, 42, 25},
    {20, 0, 30, 34},
    {42, 30, 0, 10},
    {25, 34, 10, 0}
};

int tsp(int mask, int pos){ // mask can take 2^n value while pos can take n value(city).
    // if all nodes are visited
    if(mask==visited_all) return dist[pos][0]; // current node to source node distance.
    
    // lockup, if allready visited
    if(dp[mask][pos]!=-1) return dp[mask][pos];
    
    // go to unvisited city
    int ans = INT_MAX;
    for(int city =0; city<n; city++){ // for each node
        if((mask&(1<<city))==0){ // if this city is not visited (location is city in mask).
            int newans = dist[pos][city] + tsp(mask|(1<<city), city); // distance of node from pos to city + calculate the distance for remaining.
            ans = min(ans, newans);
        }
    }
    dp[mask][pos] = ans; // store the result
    return ans;
}  

int main() {
    // initialize the dp
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            dp[i][j]=-1;
        }
    }
    // calculate the diatance from node 0 when mask is 1.
    cout<<"Distance: "<<tsp(1, 0)<<endl;
    return 0;
}

/*
Travelling salesman problem (TSP);
Distance matrix is given for graph(adjacency list).

Hamiltonian cycle: every node is visited once and coming back to original node.
Output of TSP is minimum weight.

Given nodes: A, B, C, D and all are connected to each other.
    some of the ans can be ABCDA, BCDAB, ...
    i.e salesman start from A and come back to A.

Brute force: O(n!)
    generate all permutation and check the weights.
Optimization: O((n-1)!)
by fixing the node, as there is a cyclic permutation.
we get same answer when we rotate the list.

Dynamic optimization: Top-down DP (recursion + memoization).
    -> recursive branch : store visited, 
Mask: 0000 <- none visited for V=4
      1111 <- all visited i.e. 2^4 -1

Total ans can be 2^n * n so dp[2^n][n].
*/