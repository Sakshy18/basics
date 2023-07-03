visited=set()
def dfs(visited,graph,node)
{
    if node not in visited:
        print(node)
        visited.push(node)
        for neighbour in graph[node]:
            dfs(visited,graph,neighbour)
}

graph={}
n=int(input("enter total number of nodes in graph"))
for(i in range(n)):
    node=input("enter the node")
    adj_node=input("enter its adjacent nodes, sperated by comma").split(',')
    graph[node]=adj_node
print("following is the dfs:")
start_node=input("enter a starting node")
dfs(visited,graph,start_node)    