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

	bool isCyclic(T source){
		map<T, bool> visited;
		map<T, T> parent;
		queue<T> Q;
		Q.push(source);
		visited[source]=true;
		parent[source] = source;
		while(!Q.empty()){
			T node = Q.front();
			Q.pop();
			for(auto neighbour:List[node]){
				if(parent[node] != neighbour and visited[neighbour]){
					return true;
				}else if(!visited[neighbour]){
					visited[neighbour] = true;
					parent[neighbour] = node;
					Q.push(neighbour);
				}
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
Finding cycle in the graph.
	-> queue the node while visiting.
	-> maintain an parent map for skipping the child node.
	-> if there are more than one path to reach a node except parent then there is a cycle.


*/