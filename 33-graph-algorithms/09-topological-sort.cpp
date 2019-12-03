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
	void DFSHelper(T node, map<T, bool> &visited, list<T> &ordering){
		visited[node] = true;
		// call dfs on unvisited neighbour
		for(T neighbour:List[node]){
			if(!visited[neighbour])
				DFSHelper(neighbour, visited, ordering);
		}
		// just this single line for topological sort
		// all children of current node have been visited
		ordering.push_front(node);
	}

	void DFSToplolgicalSort(T source){
		map<T, bool> visited;
		list<T> ordering;
		for(auto i: List){
			T node = i.first;
			if(!visited[node]){
				DFSHelper(node, visited, ordering);
			}
		}
		// print ordering
		for(T element:ordering){
			cout<<element<<"-->";
		}
		cout<<endl;
	}
	

};

int main(){

    Graph<string> h;
    h.addEdge("English", "Programing Logic", false);
    h.addEdge("Maths", "Programing Logic", false);
    h.addEdge("Programing Logic", "HTML", false);
    h.addEdge("Programing Logic", "Python", false);
    h.addEdge("Programing Logic", "Java", false);
    h.addEdge("Programing Logic", "JS", false);
    h.addEdge("Python", "Web Development", false);
    h.addEdge("HTML", "CSS", false);
    h.addEdge("CSS", "JS", false);
    h.addEdge("JS", "Web Development", false);
    h.addEdge("Java", "Web Development", false);
    h.addEdge("Python", "Web Development", false);

	h.DFSToplolgicalSort("English");// start from non dependent node

	return 0;
}


/*
Topological sorting:
	-> outputs the linear ordering of vertices of the graph.
	-> edge(u->v) vertex u comes first before v.
	-> works only on directed graph (Acyclic).
	-> graph should not contain a cyclic.
	-> multiple ordering are possible.
	-> Directed Acyclic Graph (DAG).

Apllication:
	-> dependency graph.
	-> installing all dependencies in package in linux etc.

Method:
	-> visit the node.
	-> if no more node then add this node at front of list.
	-> repeate the same process for other node too.
	-> this will make the dependency graph.
	-> or topological sort.
*/