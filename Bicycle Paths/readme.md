## Bicycle Paths Problem Statement: 
For every vertex $v$ in a directed graph, calculate the number of reachable vertices, given the **"fairness" constraint**: If there is no path from $v$ to $u$, then there is at most one path from $u$ to $v$.

## Soultion O(n + m): 
The solution uses Kosaraju's algorithm to condense the directed graph into Strongly Connected Components (SCCs), effectively transforming it into a Directed Acyclic Graph (DAG). It then calculates reachability for each component using Dynamic Programming (DP) on the DAG by traversing it in reverse topological order.
