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
	bool isCyclicHelper(T node, map<T, bool> &visited, T parent){
		visited[node]=true;
		for(T neighbour:List[node]){
			if(!visited[neighbour]){
				if(isCyclicHelper(neighbour, visited, node))
					return true;
			}else if(neighbour!=parent){
				return true;
			}
		}
		return false;
	}
	bool isCyclicDFS(){
		map<T, bool> visited;
		for(auto i:List){
			T node = i.first;
			if(!visited[node]){
				if(isCyclicHelper(node, visited, node)) return true;
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
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,3);

	if(h.isCyclicDFS()){
        cout<<"Have a cycle.\n";
    }else{
        cout<<"Don't have a cycle.\n";
    }
   
    if(g.isCyclicDFS()){
        cout<<"Have a cycle.\n";
    }else{
        cout<<"Don't have a cycle.\n";
    }

	return 0;
}


/*
Finding cycle in the undirected graph.
	-> queue the node while visiting.
	-> maintain an parent map for skipping the child node.
	-> if there are more than one path to reach a node except parent then there is a cycle.


*/