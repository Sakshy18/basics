visited = [] # List for visited nodes.
queue = []   # Initialize a queue

def bfs(visited, graph, node): # Function for BFS
    visited.append(node)
    queue.append(node)

    while queue:          # Creating loop to visit each node
        m = queue.pop(0) 
        print(m, end=" ")

        for neighbour in graph[m]:
            if neighbour not in visited:
                visited.append(neighbour)
                queue.append(neighbour)

# User input for graph
graph = {}
num_nodes = int(input("Enter the number of nodes in the graph: "))

for i in range(num_nodes):
    node = input("Enter node: ")
    adjacent_nodes = input("Enter adjacent nodes (comma-separated): ").split(',')
    graph[node] = adjacent_nodes

# Driver Code
print("Following is the Breadth-First Search")
start_node = input("Enter the starting node for BFS: ")
bfs(visited, graph, start_node)