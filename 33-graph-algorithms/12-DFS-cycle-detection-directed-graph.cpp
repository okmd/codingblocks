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
	bool isCyclicHepler(T node, map<T, bool> &visited,map<T, bool> &inStack){
		visited[node] = true;
		inStack[node] = true;
		for(T neighbour : List[node]){
			if((!visited[neighbour] and isCyclicHepler(neighbour, visited, inStack)) or inStack[neighbour]){
				return true;
			}
		}
		// pop the node 
		inStack[node] = false;
		return false;
	}
	bool isCyclic(T source){
		map<T, bool> visited;
		map<T, bool> inStack;
		for(auto i:List){
			T node = i.first;
			if(!visited[node]){
				bool cyclicPresent = isCyclicHepler(node, visited, inStack);
				if(cyclicPresent) return true;
			}
		}
		return false;
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

    Graph<int> g;
    g.addEdge(0,2);
    g.addEdge(0,1);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(3,0);
    g.addEdge(4,5);
    g.addEdge(1,5);

	if(h.isCyclic("English")){
        cout<<"Have a cycle.\n";
    }else{
        cout<<"Don't have a cycle.\n";
    }
   
    if(g.isCyclic(1)){
        cout<<"Have a cycle.\n";
    }else{
        cout<<"Don't have a cycle.\n";
    }

	return 0;
}


/*
Finding cycle in the directed graph.
1. Back Edge - > node point to one of its ancestor.
	-> u->v i.e u is ancestor of v.
Method:
	-> visted array
	-> current state of node, in stack or explored already.
	-> initially both array is set to false.
	-> 
# Note: # of back edges = # of cycle.
*/