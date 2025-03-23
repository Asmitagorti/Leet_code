class Solution {
public:
    // start from source
    // keep going
    // reach dead end, check if its equal to destination
    // if yes, return true, else backtrack to prev node with unvisited adj node
    void dfs(unordered_map<int, vector<int>>& graph, int node, unordered_set<int>& visited) {
        if (visited.find(node) != visited.end()) return; 
        visited.insert(node); // Mark node as visited

        for (int neighbor : graph[node]) {
            dfs(graph, neighbor, visited);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if (source == destination) return true;
        unordered_map<int, vector<int>> graph; // Adjacency list representation
        for (auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]); // Undirected graph
        }
        unordered_set<int> visited;
        dfs(graph, source, visited); // Start DFS traversal

        return visited.find(destination) != visited.end(); 
    }
};
