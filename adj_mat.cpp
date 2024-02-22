#include <bits/stdc++.h>
using namespace std;

// Graph Reperesentation

// Adjacency Matrix
// int main() {
//     int n, m;

//     cin >> n >> m;  // n -> nodes , m -> edges

//     int adj[n+1][n+1];  // 1- based indexing
//     for (int i = 0; i < n; i++)
//     {
//         int u,v; 
//         cin >> u >> v;  
//         adj[u][v] = 1;
//         adj[v][u] = 1;
//     } 
//     return 0;
// }

// Adjacency List 


int main() {
    int n, m;   
    cin >> n >> m;
    // Creating adjacency list
    // vector <int> adj[n+1];  // 1-based INdexin

    vector <pair<int, int>> adj[n+1];  // 1-based indexing
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;
    // For Weighted Graph
        int wt;    cin >> wt;
        // For UNDIRECTED GRAPH..... Space - O(2E)
        // adj[u].push_back(v);
        // adj[v].push_back(u);

        // FOR DIRECTED GRAPH..... Space - O(E)
        // adj[u].push_back(v);

        // For Weighted Graph
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt}); 
    }
    return 0;
}





