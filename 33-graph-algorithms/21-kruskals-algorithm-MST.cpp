#include<bits/stdc++.h>
#define INF 100000
using namespace std;

class Edge{
	public:
		int src, dest, weight; // node, node, weight
};
// union rank and path compression algo
class Set{
	public:
		int rank, parent;
};
bool cmp(Edge e1, Edge e2){
	return e1.weight < e2.weight;
}
int find(Set *set, int i){
	if(set[i].parent!=i){
		set[i].parent = find(set, set[i].parent);
	}
	return set[i].parent;
}
void Union(Set *set, int v1, int v2){
	int v1_root = find(set, v1);
	int v2_root = find(set, v2);
	if(set[v1_root].rank < set[v2_root].rank){
		set[v1_root].parent = v2_root;
	}else if(set[v1_root].rank > set[v2_root].rank){
		set[v2_root].parent = v1_root;
	}else{ // same
		set[v2_root].parent = v1_root;
		set[v1_root].rank++;
	}
}
void Kruskal(Edge *input, int n, int e){
	sort(input, input+e, cmp);
	Edge *output = new Edge[n-1]; // only N-1 edges at minimum
	Set *set = new Set[n];
	for(int i=0; i<n; i++){
		set[i].rank = 0; // assign the ranks 0 initially
		set[i].parent = i; // assign the parent to itself
	}

	int counter=0, i=0;
	while(counter<n-1){
		Edge current_edge = input[i]; // curr min edge
		int sourceParent = find(set, current_edge.src); // parent of source
		int destinationParent = find(set, current_edge.dest); // parent of destination 
		if(sourceParent!=destinationParent){
			// lie in differnt set
			output[counter]  = current_edge; // this edge is in MST
			Union(set, sourceParent, destinationParent); // union both set have source and destination parent
			counter++;
		}
		i++;
	}
	// print the edges
    int total_weight = 0;
    for(int i=0; i<n-1; i++){
    	cout<<"Edge["<<output[i].src<<"--"<<output[i].dest<<"] weight["<<output[i].weight<<"]"<<endl;
        total_weight += output[i].weight;
    }
    cout<<"Total weight: "<<total_weight<<endl;
}

int main() {
    int n, e;
    cin>>n>>e;
    Edge *input = new Edge[e];
    for(int i=0; i<e; i++){
    	int u,v,w;
    	cin>>u>>v>>w;
    	input[i].src = u;
    	input[i].dest = v;
    	input[i].weight = w;
    }
    Kruskal(input, n, e);

    return 0;
}

/*
Kruskal is used for Minimum Spanning Tree.
Kruskal algorithm is Greedy algorithm and uses
Weighted undirected graph.
It pick each edge in accending order so that it do not form the cycle.

Method:
	-> find an edge which has min weight. 
	-> insert the edge so that it don't give the cycle.
	-> use union find by rank method

Input:
7 8
0 3 4
0 1 6
1 2 5
3 2 7
3 4 2
4 5 6
5 6 1
4 6 3

Output:MST

Edge[5--6] weight[1]
Edge[3--4] weight[2]
Edge[4--6] weight[3]
Edge[0--3] weight[4]
Edge[1--2] weight[5]
Edge[0--1] weight[6]
Total weight: 21

*/