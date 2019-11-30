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
	void BFS(T source){
		// one hashmap and queue
		map<T, bool> visited; // visited or not
		queue<T> q; 

		q.push(source);
		visited[source] = true;
		cout<<"BFS: ";
		while(!q.empty()){
			T node = q.front();
			cout<<node<<" ";
			q.pop();

			// for neighbours
			for(auto neighbour:List[node]){
				if(!visited[neighbour]){
					q.push(neighbour);
					visited[neighbour] = true;
				}
			}
		}
		cout<<endl;
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
	h.BFS(0);

	return 0;
}

/*
Graph Traversal

There are two type of methods to visits the node in the graph
-> Breadth first search (BFS) - FIFO ordering.
-> Depth first search (DFS)
In BFS push each node to queue one by one.
node -> neighbours -> remove root etc.
each node is marked as visited as we visit any node for the first time.

Complexity of BFS
	-> Time - O(V+E)
	-> Space - O(V)

*/