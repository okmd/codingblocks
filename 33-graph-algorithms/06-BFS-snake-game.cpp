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
	T SSSP(T source, T destination){
		// one hashmap and queue
		map<T, T> parent;
		map<T, int> dist; // visited or not
		queue<T> q; 
		for(auto i:List){
			dist[i.first] = INT_MAX;
		}

		q.push(source);
		dist[source] = 0;
		parent[source] = source;

		cout<<"Level order: ";
		while(!q.empty()){
			T node = q.front();
			cout<<node<<" ";
			q.pop();

			// for neighbours
			for(auto neighbour:List[node]){
				if(dist[neighbour]==INT_MAX){
					q.push(neighbour);
					dist[neighbour] = dist[node]+1;
					parent[neighbour] = node;
				}
			}
		}
		//not reachable nodes will have INF distance.
		for(auto i:List){
		    T node = i.first;
		    cout<<"distance of "<<node<<" is "<<dist[node]<<endl;
		}
        // from destination to source path
        cout<<"\nPath:";
        T temp = destination;
        while(temp!=source){
            cout<<temp<<"<--";
            temp = parent[temp];
        }
        cout<<source;
        
        return dist[destination];
	}

};

int main(){

    Graph<int> g;
    int board[50] = {0};
    board[2] = 13; // there is a ladder
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = -10;
    board[32] = -2;
	board[34] = -22;
    // construct the graph
    for(int u=0; u<=36; u++){ //36 nodes
        for(int dice = 1; dice<=6; dice++){
            int v = u+dice+board[u+dice];// at node 0 if dice gives 1 then 0+1+borad[0+1] = 1 i.e go to 1 and so on..
            g.addEdge(u,v, false); // it can be seen as there is an edge between u and v
        }
    }
    
    cout<<"\nShortest distance is: "<<g.SSSP(1,36)<<endl;

	return 0;
}


/*
This is SSSP probplem - snake and ladder problem of 6x6 grid
Use dice to play.
grid size is 1 to 36.
-> un weighted graph (only single turn of dice)
-> directed graph

Note: create board array for ladder and snake. i.e up and down.

*/