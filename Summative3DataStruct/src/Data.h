#pragma once
#include <list>
#include <iostream>
using namespace std;

class Graph
{
	private:
	int V;
	list <int> *adj;						 //Programmer2
	int **adj2;								 //Programmer2
	void DFSUtil (int v, bool visited []);	 //Lead
	void BFSUtil (int s, bool visited []);	 //Lead

	public:
	Graph (int);						     //All	
	void addEdge (int u, int v);		     //All
	void addEdge2 (int u, int v);			 //Programmer2
	void printGraph ();						 //All
	void printGraph2 ();					 //Programmer2
	void DFS (int v);						 //Lead
	void BFS (int s);						 //Lead
};
