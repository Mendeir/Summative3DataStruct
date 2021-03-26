#include <iostream>
#include <list>
#include "Data.h"
using namespace std;

Graph::Graph (int x)
{
		
	V = x;
	adj = new list <int> [V];
	adj2 = new int* [V];
	for (int i = 0; i < V; i++)
		adj2 [i] = new int [V];
	for (int i = 0; i < V; i++)
		for (int j = 0; j < V; j++)
			adj2 [i][j] = 0;

}

void Graph::addEdge (int u, int v)
{
	adj [u].push_back (v);
}

//Author: Padilla, Joshua Matthew C.
void Graph::populateList()
{
	//Edges for AdjecencyList
	addEdge(0, 6);
	addEdge(0, 5);
	addEdge(1, 3);
	addEdge(1, 5);
	addEdge(2, 4);
	addEdge(3, 1);
	addEdge(3, 2);
	addEdge(3, 4);
	addEdge(4, 0);
	addEdge(4, 2);
	addEdge(5, 0);
	addEdge(6, 0);
	addEdge(6, 3);
}

void Graph::addEdge2 (int u, int v)
{
	adj2 [u][v] = 1;
}

//Author: Padilla, Joshua Matthew C.
void Graph::populateMatrix()
{
	//Edges for Matrix Graph
	addEdge2(0, 6);
	addEdge2(0, 5);
	addEdge2(1, 3);
	addEdge2(1, 5);
	addEdge2(2, 4);
	addEdge2(3, 1);
	addEdge2(3, 2);
	addEdge2(3, 4);
	addEdge2(4, 0);
	addEdge2(4, 2);
	addEdge2(5, 0);
	addEdge2(6, 0);
	addEdge2(6, 3);
}
// A utility function to print the adjacency list 
// representation of graph

//Author : Padilla, Joshua Matthew C.
void Graph::printGraph()
{
	string countryName[7]{ " Atlanta    ", " Austin     ", " Chicago    " , " Dallas     " 
								, " Denver     ", " Houston    " , " Washington " };

	int tmp = 0;
	cout << "Adjacency List..." << endl << endl;
	cout << "\t\t";

	while (tmp < V) {

		//PRINT all the country Name
		for (int i = 0; i < V; i++) {
			cout << countryName[tmp];
			++tmp;
		//Output the connection of all edges
			for (auto x : adj[i])
				cout << "\t-> " << countryName[x];
			cout << endl;

		}
		
	}

}
//Author: Padilla, Joshua Matthew C.
void Graph::printGraph2()
{
	int names, j = 0;
	int i = 0;
	int k = 0;

	string countryName[7]{" Atlanta", " Austin", " Chicago" , " Dallas" , " Denver", " Houston" , " Washington" };
	cout << "Adjacency Matrix..." << endl << endl;
	cout << "\t\t";

	//if i is not equal to 7 it will output all the Country Name
	while (i != 7){

		cout << countryName[i];
		cout << "[" << i << "]" << "\t";

		i++;
	}
	cout << endl;


	while (k < V){
		
		//Output the countryName
		for ( i = 0; i < V; i++) {
			cout << countryName[k];
			cout << "[" << k << "]" << "\t";
			k++;

		//Output the edges in matrix per country
			for (j = 0; j < V; j++)
				cout << " " << adj2[i][j] << "\t\t";
			cout << endl;
			
		}
		
		
		
	}
		cout << endl;
	
}

void Graph::DFSUtil (int v, bool visited [])
{
	// Mark the current node as visited and 
	// print it 
	visited [v] = true;
	cout << v << " ";

	// Recur for all the vertices adjacent 
	// to this vertex 
	list<int>::iterator i;
	for (i = adj [v].begin (); i != adj [v].end (); ++i)
		if (!visited [*i])
			DFSUtil (*i, visited);
}

// DFS traversal of the vertices reachable from v. 
// It uses recursive DFSUtil() 
void Graph::DFS (int v)
{
	// Mark all the vertices as not visited 
	bool *visited = new bool [V];
	for (int i = 0; i < V; i++)
		visited [i] = false;

	// Call the recursive helper function 
	// to print DFS traversal 

	DFSUtil (v, visited);
	for (int i = 0; i < V; i++)
		if (!visited [i])
			DFSUtil (i, visited);

	for (int i = 0; i < V; i++)
		if (!visited [i])
			cout << i << " ";
}

void Graph::BFS (int s)
{
	// Mark all the vertices as not visited 
	bool *visited = new bool [V];
	for (int i = 0; i < V; i++)
		visited [i] = false;

	BFSUtil (s, visited);
	for (int i = 0; i < V; i++)
		if (!visited [i])
			BFSUtil (i, visited);

	for (int i = 0; i < V; i++)
		if (!visited [i])
			cout << i << " ";
}

void Graph::BFSUtil (int s, bool visited [])
{
	// Create a queue for BFS 
	list<int> queue;

	// Mark the current node as visited and enqueue it 
	visited [s] = true;
	queue.push_back (s);

	// 'i' will be used to get all adjacent 
	// vertices of a vertex 
	list<int>::iterator i;

	while (!queue.empty ())
	{
		// Dequeue a vertex from queue and print it 
		s = queue.front ();
		cout << s << " ";
		queue.pop_front ();

		// Get all adjacent vertices of the dequeued 
		// vertex s. If a adjacent has not been visited,  
		// then mark it visited and enqueue it 
		for (i = adj [s].begin (); i != adj [s].end (); ++i)
		{
			if (!visited [*i])
			{
				visited [*i] = true;
				queue.push_back (*i);
			}
		}
	}
}