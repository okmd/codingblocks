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
	void DFSHelper(T node, map<T, bool> &visited){
		visited[node] = true;
		cout<<node<<" ";
		for(T neighbour:List[node]){
			if(!visited[neighbour])
				DFSHelper(neighbour, visited);
		}
	}
	void DFS(T source){
		map<T, bool> visited;
		DFSHelper(source, visited);
	}
	

};

int main(){

    Graph<int> h;
	h.addEdge(0,1);
    h.addEdge(1,2);
	h.addEdge(0,4);
	h.addEdge(2,4);
	h.addEdge(2,3);
    h.addEdge(3,4);
	h.addEdge(3,5);
	h.DFS(0);

	return 0;
}


/*
Depth first search
start from the node and recursively visit the all non visited node.
Note: multiple ordering are possible.(visiting of node)
1. recursive call to non-visted node.
2. array/map to maintain nodes which are not visited.
*/