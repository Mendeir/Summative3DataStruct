#pragma once
#include <list>
#include <iostream>
using namespace std;

class Graph
{

	private:
	
	int V;
	list <int> *adj;						 //Programmer2 (Padilla, Joshua Matthew C.)
	int **adj2;								 //Programmer2 (Padilla, Joshua Matthew C.)
	void DFSUtil (int v, bool visited []);	 //Lead
	void BFSUtil (int s, bool visited []);	 //Lead

	public:
	Graph (int);						     //All	
	void addEdge (int u, int v);		     //ALL
	void populateList();					//Programmer2 (Padilla, Joshua Matthew C.)
	void addEdge2 (int u, int v);			//Programmer2 (Padilla, Joshua Matthew C.)
	void populateMatrix();					//Programmer2 (Padilla, Joshua Matthew C.)
	void printGraph ();						 //All
	void printGraph2();                      //Programmer2 (Padilla, Joshua Matthew C.)
	void DFS (int v);						 //Lead
	void BFS (int s);						 //Lead
};

