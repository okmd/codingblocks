#include<bits/stdc++.h>
#define INF 100000
using namespace std;

class Graph{
	public:
		int v;
		list<pair<int, int> > *adj; // pointer a list vertex, weight
		Graph(int v){
			this->v =v;
			adj = new list<pair<int, int> > [v]; // array of list
		}
		void addEdge(int u, int v, int w){
			adj[u].push_back(make_pair(v, w)); // edge u->v with weight w
			adj[v].push_back(make_pair(u, w)); // edge v->u with weight w
		}
		int findMinVertex(int *weight, bool *visited, int v){
			int minVertex = -1;
			for(int i=0; i<v; i++){
				if(!visited[i] and (minVertex==-1 or weight[i] < weight[minVertex])){
					minVertex = i;
				}
			}
			return minVertex;
		}
		void Prims(){
			bool *visited = new bool[v]; // visited vertex
			int *parent = new int[v]; // parent of source vertex with min weight
			int *weight = new int[v]; // weight of each vertex
			for(int i=0;i<v; i++){
				visited[i]=false;
				weight[i]=INF;
			}

			parent[0]=-1;//source
			weight[0]=0;

			for(int i=0; i<v;i++){
				int minVertex = findMinVertex(weight, visited, v);
				visited[minVertex] = true;
				for(auto neighbor: adj[minVertex]){
					if(!visited[neighbor.first]){
						if(weight[neighbor.first] > neighbor.second){
							// if weight for a vertex
							parent[neighbor.first] = minVertex; // node
							weight[neighbor.first] = neighbor.second;// update the min weight
						}
					}
				}
			}
			// print the MST
			for(int i=1; i<v; i++){
				cout<<"Edge["<<i<<"--"<<parent[i]<<"] weight["<<weight[i]<<"]"<<endl;
			}
		}
};

int main() {
    int n, e;
    cin>>n>>e;
    Graph g(n);
    for(int i=0; i<e; i++){
    	int u,v,w;
    	cin>>u>>v>>w;
    	g.addEdge(u,v,w);
    }
    g.Prims();

    return 0;
}

/*
Prims algorithm is used for Minimum Spanning Tree.
Prims algorithm is Greedy algorithm and uses
Weighted undirected connected graph.

Method:
-> visted map: which vertex are visited.
-> table vertex-weight-parent
-> choose source vertex arbitrarliy.
-> assign weight as INF to all vertex.
-> source parent -1 and weight 0
-> extract min weight vertex one by one from the table
-> and travel the neighbor which are not visited.
-> compare weight of edge to get the less path.
-> when all neighbor has done the mark visited.
-> and update the parent for min path.
-> repeatdly check non-visited vertex. 

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

Edge[1--0] weight[6]
Edge[2--1] weight[5]
Edge[3--0] weight[4]
Edge[4--3] weight[2]
Edge[5--6] weight[1]
Edge[6--4] weight[3]

*/