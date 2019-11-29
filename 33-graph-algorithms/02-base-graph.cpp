#include <bits/stdc++.h>
using namespace std;

class Graph{
private:
	int V;
	list<int> *l;

public:
	Graph(int v){
		V = v;
		l = new list<int>[V]; // array of linked list
	}
	void addEdge(int u, int v, bool bidir=true){
		l[u].push_back(v);
		if(bidir)
			l[v].push_back(u);
	}
	void print(){
		for(int i=0; i<V; i++){
			cout<<i<<"->";
			for(int vertex:l[i]){
				cout<<vertex<<",";
			}
			cout<<endl;
		}
	}

};

int main(){
	Graph g(5); //0 to 4
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(4,3);
	g.addEdge(1,4);
	g.addEdge(1,2);
    g.addEdge(1,3);
	g.addEdge(2,3);
	g.print();
	return 0;
}

/*
Adjacency list representaion of graph.

0 -> 1, 4
1 -> 2 ,3 4, 0
2 -> 1, 3
3 -> 2, 1, 4
4 -> 1, 0, 3

*/