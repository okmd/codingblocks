/*
Finite set of nodes(vertices) and edges.
Application: 
    -> Google maps
    -> Path finding algorithms
    -> Social networking websites.(Facebook edge-rank algorithms)
    -> Routing - server at different geolocation.

Terminologies and components:
    -> adjacent vertices ( O ---- O) adjacent node.
    -> degree (of node) is # of edges connected to that node.
        -> in-degree - incoming edges.
        -> out-degree - outgoing edges.
    -> path - way from one node to other.
    -> subgraph - some path of graph.
    -> connected graph - all nodes are connnected by atleast one edge (two connnected subgraph).
    -> connected component - graph in which all nodes are connected is one component all such different graph act a component.
    -> tree - graph without cycle (visit only one time).
    -> forest - collection of trees (all connected component).
    -> minimum spanning tree - weighted graph - all the nodes are covered with minimum weight - resulting tree is MST.
Types of graph:
    -> directed edges - uni-directional
    -> undirected edge - bi-directional
    -> weighted edges - some value like distance
    -> non weighted edges - no value, just an edge i.e connection.

Number of edges in a graph
    -> complete graph - O(n^2) edges:every node is connected with each other - nC2.
    -> connected graph - range(n-1 to n^2): from tree to complete graph.
    -> tree - O(n-1): every other node requires one node except root node.

Implementation of graph:
    1. List
    -> V ={a,b,c,d} and E ={(a, b), (b, c), (d, a) .. }
    -> both V and E are list.
    2. Adjacency Matrix O(n^2) memory , not memory efficient, not used for finding neighbour.
    -> VxV matrix, which store the edge between the edges.
    -> wighted and non-weighted edges can be represented.
    3. Adjacency list
    -> node -> all nodes connected to this node is also a list.
*/