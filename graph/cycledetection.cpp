// // #include <bits/stdc++.h>

// // using namespace std;

// // class Graph {
// // public:
// //     // Constructor
// //     Graph(int vertices);

// //     // Function to add an edge to the graph
// //     void addEdge(int source, int destination);

// //     // Function to print the graph
// //     void printGraph();

// // private:
// //     int vertices;                   // Number of vertices
// //     vector<vector<int>> adjacencyList;  // Adjacency list to store edges
// // };

// // // Constructor
// // Graph::Graph(int vertices) {
// //     this->vertices = vertices;
// //     adjacencyList.resize(vertices);
// // }

// // // Function to add an edge to the graph
// // void Graph::addEdge(int source, int destination) {
// //     // Add destination to the adjacency list of the source
// //     adjacencyList[source].push_back(destination);
// // }

// // // Function to print the graph
// // void Graph::printGraph() {
// //     for (int i = 0; i < vertices; ++i) {
// //         cout << "Vertex " << i << ": ";
// //         for (const auto &neighbor : adjacencyList[i]) {
// //             cout << neighbor << " ";
// //         }
// //         cout << endl;
// //     }
// // }


// // int main() {
// //     // Create a directed graph with 5 vertices
// //     Graph graph(5);

// //     // Add edges to the graph
// //     graph.addEdge(0, 1);
// //     graph.addEdge(0, 2);
// //     graph.addEdge(1, 3);
// //     graph.addEdge(2, 4);
// //     graph.addEdge(3, 4);

// //     // Print the graph
// //     cout << "Directed Graph:\n";
// //     graph.printGraph();

// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     unordered_map<int,int>mp;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         mp[a[i]]=i;
//     }
//     for(auto i:mp)cout<<i.first<<" -> "<<i.second<<endl;
//     }
// C++ program to demonstrate the use of std::nth_element
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	int v[] = { 3, 2, 10, 45, 33, 56, 23, 47 }, i;

	// Using std::nth_element with n as 5
	std::nth_element(v, v+3,v+4);                                                      

	// Since, n is 5 so 5th element should be sorted
	for (i = 0; i < 8; ++i) {
		cout << v[i] << " ";
	}
	return 0;
}
