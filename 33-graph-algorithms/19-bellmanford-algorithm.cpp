#include<bits/stdc++.h>
#define INF 100000
using namespace std;

class Edge{
	public:
		int src, dest, weight;
};

class Graph{
	public:
		int v, e;
		Edge *edge;
		Graph(int v, int e){
			this->v =v;
			this->e = e;
			edge = new Edge[e];
		}
		void addEdge(int u, int v, int w, int count){
			edge[count].src = u;
			edge[count].dest = v;
			edge[count].weight = w;
		}
		void BellmanFord(int src){
			int distance[v];
			for(int i=0; i<v; i++){
				if(i==src){
					distance[i]=0;
				}else{
					distance[i] = INF;
				}
			}
			// relaxation n-1
			for(int i=1; i<=v-1; i++){
				for(int j=0; j<e; j++){
					int src = edge[j].src;
					int dest = edge[j].dest;
					int weight = edge[j].weight;
					//relax chk
					if(distance[src]!=INF and distance[src] + weight < distance[dest]){
						distance[dest] = distance[src] + weight;
					}
				}
			}
			// chk for nth time
			for(int j=0; j<e; j++){
				int src = edge[j].src;
				int dest = edge[j].dest;
				int weight = edge[j].weight;
				//relax chk
				if(distance[src]!=INF and distance[src] + weight < distance[dest]){
					cout<<"Graph contains -ve weight cycle!\nSo shortest path can't be determined.";
					return;
				}
			}
			// print
			for(int i=0; i<v; i++){
				cout<<"Vertex:["<<i<<"] has distance: "<<distance[i]<<endl;
			}
		}
};

int main() {
    int n, e;
    cin>>n>>e;
    Graph g(n, e);
    for(int i=0; i<e; i++){
    	int u,v,w;
    	cin>>u>>v>>w;
    	g.addEdge(u,v,w,i);
    }
    g.BellmanFord(0);

    return 0;
}

/*
Q: As dijkstra algorithm fails for the -ve weights.
for -ve weight bellmanford is used as it can detect -ve weight cycle.

Assign a weight(INF) for each vertex except source(0).
Relaxation: for u->v, if dist[v] > dist[u]+weight(u,v) : dist[v]=dist[v]+weight(u,v)
iterate over all the edges |v|-1 time and realx.

Detection -ve weight cycle:
	->e.g. N=4 so relaxation is 3 times.
	-> initialize the node weight INF
	-> relax N-1 times
	-> in Nth iteration, weight changes(decreases) as there is -ve weight cycle.
	-> if there is no -ve cycle then weight should not change.

Note: It can not detect shortest path for -ve cycle.
Complexity: O(EV) 
for complete graph O(V^3)
Using bottom up appraoch of DP: O()

INP:

5 8
0 1 -1
0 2 4
1 2 3
3 2 5
4 3 -3
1 4 2
1 3 2
3 1 1

or 

5 8
0 1 -1
0 2 -4
1 2 -3
3 2 -5
4 3 -3
1 4 -2
1 3 -2
3 1 1

Output:

Vertex:[0] has distance: 0
Vertex:[1] has distance: -1
Vertex:[2] has distance: 2
Vertex:[3] has distance: -2
Vertex:[4] has distance: 1

or 

Graph contains -ve weight cycle!
So shortest path can't be determined.


*/