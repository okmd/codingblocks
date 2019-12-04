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

	void BFSToplolgicalSort(T source){
		map<T, bool> visited;
		map<T, int> indegree;
		queue<T> Q;
		// initialize
		for(auto i: List){
			T node = i.first;
			visited[node] = false;
			indegree[node] = 0;
		}
		// init indegree
		for(auto i: List){
			T u = i.first;
			for(T v: List[u]){
				indegree[v]++;
			}
		}
		// initialize queue
		for(auto i: List){
			T node = i.first;
			if(indegree[node]==0){
				Q.push(node);
			}
		}
		// algorithm
		while(!Q.empty()){
			T node = Q.front();
            cout<<node<<"-->";
			Q.pop();
			for(auto neighbour: List[node]){
				indegree[neighbour]--;
				if(indegree[neighbour]==0){
					Q.push(neighbour);
				}
			}
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

	h.BFSToplolgicalSort("English");// start from non dependent node

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
	-> first install dependencies.


Method: KAHN'S ALGORITHM
	-> find those node and resolve whose in-degree in 0.
	-> enqueu all nodes with 0 indegree node.
	-> pop up one node from queue and update the indegree of neighbour nodes.
	-> repeate the same process for other node too.
	-> this will make the dependency graph.
	-> or topological sort.
*/