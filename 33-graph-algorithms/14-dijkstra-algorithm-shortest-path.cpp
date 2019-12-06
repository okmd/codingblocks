#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    unordered_map<T, list<pair<T, int> > > m; // {Delhi->[(Mumbai, 2), (Pune, 4)]}
    public:
    void addEdge(T u, T v, int dist, bool bidir=true){
        m[u].push_back(make_pair(v,dist));
        if(bidir)
            m[v].push_back(make_pair(u,dist));
    }
    void printAdj(){
        for(auto j:m){ // for map
            cout<<j.first<<"->";
            for(auto l: j.second){ // for list
                cout<<"("<<l.first<<","<<l.second<<")";
            }
            cout<<endl;
        }
    }
    void dijsktraSSSP(T src){
        unordered_map<T, int> dist;
        for(auto j: m){
            dist[j.first] = INT_MAX; // initialize each node INF distance
        }
        set<pair<int, T> > s; // first is distance, as set sort by first parameter
        dist[src] = 0; // source distance from itself is always 0
        s.insert(make_pair(0, src));

        while(!s.empty()){
            auto p = *(s.begin());
            T node = p.second;
            int nodeDist = p.first;
            s.erase(s.begin());

            for(auto childPair: m[node]){
                if(nodeDist + childPair.second < dist[childPair.first]){
                    T dest = childPair.first;
                    auto f = s.find( make_pair(dist[dest], dest) );
                    if(f!=s.end()){ // if destination in set , to update distance in set, remove then add with updated distance
                        s.erase(f);
                    }
                    dist[dest] = nodeDist + childPair.second;
                    s.insert(make_pair(dist[dest], dest));                }
            }
        }
        
        for(auto d:dist){
            cout<<d.first<<" is located at: "<<d.second<<endl;
        }

    }



};

int main() {
    // Graph<int> g;
    // g.addEdge(1,2,1);
    // g.addEdge(1,3,4);
    // g.addEdge(2,3,1);
    // g.addEdge(3,4,2);
    // g.printAdj();
    // g.dijsktraSSSP(1);

    Graph<string> india;
    india.addEdge("Amritsar", "Delhi", 1);
    india.addEdge("Amritsar", "Jaipur", 4);
    india.addEdge("Jaipur", "Delhi", 2);
    india.addEdge("Jaipur", "Mumbai", 8);
    india.addEdge("Bhopal", "Agra", 2);
    india.addEdge("Mumbai", "Bhopal", 3);
    india.addEdge("Agra", "Delhi", 1);
    india.printAdj();
    india.dijsktraSSSP("Amritsar");

    return 0;
}

/*
Single source shortest path algorithm.
From single source calculate shortest path to all the nodes.
Edges can be bi or uni-directional edges.
It uses weighted graph.
Adjacency list is most efficient way.


Algo:
    -> all nodes have INF distance except source.
    -> use priority queue(hashmap) or set.
    -> distance of node = distance of parent + weight (min).
    -> pick node with min distance from the set<node, distance>.
    -> set is sorted accoring to distance.
    -> to update in set -> remove then insert new pair.

Complexity: O(ElogV)
*/
