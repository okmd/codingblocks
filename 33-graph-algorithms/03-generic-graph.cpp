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
	void print(){
		// iterate over map
		for(auto obj:List){
			cout<<obj.first<<"->";
			for(auto entry:obj.second){
				cout<<entry<<",";
			}
			cout<<endl;
		}
	}

};

int main(){
	Graph<string> g; // dynamic hashmap
	g.addEdge("Putin", "Trump", false);
	g.addEdge("Putin", "Modi", false);
	g.addEdge("Putin", "Pop", false);
	g.addEdge("Modi", "Trump", true);
	g.addEdge("Modi", "Yogi", true);
	g.addEdge("Yogi", "Prabhu", false);
	g.addEdge("Prabhu", "Modi", false);
	g.print();
    
    Graph<int> h; //0 to 4
	h.addEdge(0,1);
	h.addEdge(0,4);
	h.addEdge(4,3);
	h.addEdge(1,4);
	h.addEdge(1,2);
    h.addEdge(1,3);
	h.addEdge(2,3);
	h.print();

	return 0;
}

/*
Adjacency list representaion of graph.
Sorted ordder entries due to map
can be used for any type of data
*/