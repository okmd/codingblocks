import sys

class Graph:
    def __init__(self):
        self.matrix = {} # {'Delhi':[('Mumbai', 4), ('Punjab', 5)]}

    def add_edge(self, u, v, dist, bidirection=True):
        if self.matrix.get(u):
            self.matrix[u].append((v, dist))
        else:
             self.matrix[u] = [(v, dist)]
        if bidirection:
            if self.matrix.get(v):
                self.matrix[v].append((u, dist))
            else:
                self.matrix[v] = [(u, dist)]
        
    
    def print_adj_matrix(self):
        for j in self.matrix:
            print(j, end="->")
            for l in self.matrix.get(j):
                print("( {}, {} )".format(l[0],l[1]), end=" ")
            print()
    
    def dijkstra(self, src):
        dist = {} # {Delhi:4, ..}
        for ele in self.matrix:
            dist[ele] = sys.maxsize # INF distance
        visited_set = set() # ((4, Delhi), ...)
        dist[src] = 0

        visited_set.add((0,src))

        while len(visited_set):
            iterator = iter(visited_set)
            node = next(iterator) # Delhi
            node_distance = node[0]
            node_name = node[1]
            visited_set.remove(node)
            print(visited_set)

            for child in self.matrix[node_name]:
                if node_distance + child[1] < dist[child[0]]:
                    destination = child[0]
                    to_be_removed = (dist[destination], destination)
                    if to_be_removed in visited_set:
                        visited_set.remove(to_be_removed)
                    dist[destination] = node_distance + child[1] # min. distance
                    visited_set.add((dist[destination], destination))

        # Print distances
        print(dist)

# Main 

g = Graph()

g.add_edge("Amritsar", "Delhi", 1)
g.add_edge("Amritsar", "Jaipur", 4)
g.add_edge("Jaipur", "Delhi", 2)
g.add_edge("Jaipur", "Mumbai", 8)
g.add_edge("Bhopal", "Agra", 2)
g.add_edge("Mumbai", "Bhopal", 3)
g.add_edge("Agra", "Delhi", 1)

g.print_adj_matrix()
g.dijkstra("Delhi")
