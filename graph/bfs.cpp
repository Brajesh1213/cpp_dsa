// #include<bits/stdc++.h>
// using namespace std;

// class graph {
// public:
//     unordered_map<int, list<int>> adj;
    
//     void addEdge(int u, int v, bool direction) {
//         // direction == 0 -> undirected graph
//         // direction == 1 -> directed graph
//         // create an edge from u to v
//         adj[u].push_back(v);
//         if (direction == 0) {
//             adj[v].push_back(u);
//         }
//     }

//     void printAdjList() {
//         for (auto i : adj) {
//             cout << i.first << " -> ";
//             for (auto j : i.second) {
//                 cout << j << ", ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     // int n, m;
//     // cout << "Enter the number of edges: ";
//     // cin >> n;
//     // cout << "Enter the number of nodes: ";
//     // cin >> m;

//     // graph g;

//     // cout << "Enter edges (u v):" << endl;
//     // for (int i = 0; i < n; i++) {
//     //     int u, v;
//     //     cin >> u >> v;
//     //     // creating an undirected graph
//     //     g.addEdge(u, v, 0);
//     // }

//     // cout << "Adjacency List:" << endl;
//     // g.printAdjList();
//     int n,m;
//     cin>>n>>m;
//     vector<int>adj[n+1];
//     for(int i=0;i<m;i++){
//        int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);


//     }
    
// // for(auto i:adj) cout<<i<<" ";



//     return 0;
// }
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    // Code here

    // Initialize vis using vector
    vector<int> vis(V, 0);

    // Uncomment the line below if you want to print the adjacency list
    // for(int i = 0; i < V; i++) { for(auto j : adj[i]) cout << j << " "; cout << endl; }

    vis[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;        
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it : adj[node]) {
            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    // Don't forget to delete the dynamic array if you choose to use dynamic memory allocation for 'vis'
    // delete[] vis;

    return bfs;
}

int main() {
    // Example usage:
    int V = 5;
    vector<int> adj[V];

    // Assuming an undirected graph
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);

    vector<int> result = bfsOfGraph(V, adj);

    // Print the BFS traversal
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}

