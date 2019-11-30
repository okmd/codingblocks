#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
private:
	map<T, list<T> > List; // hashmap 

public:
	void addEdge(T u, T v, bool bidir=true){
		List[u].push_back(v);
		if(bidir)
			List[v].push_back(u);
	}
	void SSSP(T source){
		// one hashmap and queue
		map<T, T> parent;
		map<T, int> dist; // visited or not
		queue<T> q; 
		for(auto i:List){
			dist[i.first] = INT_MAX;
		}

		q.push(source);
		dist[source] = 0;
		parent[source] = source;

		cout<<"Level order: ";
		while(!q.empty()){
			T node = q.front();
			cout<<node<<" ";
			q.pop();

			// for neighbours
			for(auto neighbour:List[node]){
				if(dist[neighbour]==INT_MAX){
					q.push(neighbour);
					dist[neighbour] = dist[node]+1;
					parent[neighbour] = node;
				}
			}
		}
        cout<<endl;
		//print the distance
        for(auto obj:List){
			T node = obj.first;
			cout<<"Dist of "<<node<<" from "<<source<<" is "<<dist[node]<<endl;
		}
	}

};

int main(){

    Graph<int> h; //0 to 4
	h.addEdge(0,1);
	h.addEdge(0,4);
	h.addEdge(4,3);
	h.addEdge(1,4);
	h.addEdge(1,2);
    h.addEdge(1,3);
	h.addEdge(2,3);
    h.addEdge(5,3);
	h.SSSP(0);

	return 0;
}

/*
Graph Traversal
SSSP- single shot shortest path
Here isnstead of maintaing visited or not, we maintain the distance.
Intially all node have INF distance.
This is a level order traversal. (burning fire spread).
Maintain a parent map to  
Complexity of BFS
	-> Time - O(V+E)
	-> Space - O(V)
Application of BFS
	-> single source shortest path in un-weighted graph
	-> finding connected components
	-> Flood fill algorithm in phtotoshop, paint, for coloring region with same color.

*/