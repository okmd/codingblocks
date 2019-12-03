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
		int  components=1;
		DFSHelper(source, visited);
		cout<<endl;
		for(auto i:List){
			T city = i.first;
			if(!visited[city]){
				DFSHelper(city, visited);
				components++;
			}
		}
		cout<<"\nCurrent graph has "<<components<<" components.\n";
	}
	

};

int main(){

    Graph<string> h;
    h.addEdge("Amritsar", "Jaipur");
    h.addEdge("Amritsar", "Delhi");
    h.addEdge("Delhi", "Jaipur");
    h.addEdge("Mumbai", "Jaipur");
    h.addEdge("Mumbai", "Bhopal");
    h.addEdge("Delhi", "Bhopal");
    h.addEdge("Mumbai", "Bangalore");
    h.addEdge("Agra", "Delhi");
    h.addEdge("Andman", "Nicobar");

	h.DFS("Amritsar");

	return 0;
}


/*

DFS forest for all components.

Complexity:
Time O(V+E) for adjacency list and O(V^2) for adjacency matrix.
Space complexity - O(V)

Application
	-> traversing the graph recursively.
	-> finding the connected component(usefull in image segmentation and clustering).
	-> easy to implement can't find shortest path.
	-> flood-fill algorithms used in fill bucket tool in paint, photoshop.
	-> used in cycle detection and topological sorting.
*/