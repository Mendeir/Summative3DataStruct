#include <iostream>
#include "Data.h"
using namespace std;
void clear() 
{ 
	cout << "\033[H\033[J"; 
}
// Author : Bornilla, Dave Y.
int main()
{
	Graph countries(7);
	int choice;
	while (true) {
	cout << "[1] Create Graph \n";
	cout << "[2] Traversal \n";
	cout << "[3] Exit \n\n";
	cout << "Enter choice: ";
	cin >> choice;
	
		switch (choice)
		{

		case 1:
			clear();
			int graphChoice;
			cout << "* ******************************* *\n";
			cout << "*           Create Graph          *\n";
			cout << "* ******************************* *\n";
			cout << "Graph Operations \n";
			cout << "[1] Adjacency List \n";
			cout << "[2] Adjacency Matrix \n";
			cout << "Enter choice: ";
			cin >> graphChoice;
			switch (graphChoice)
			{
			case 1:
				clear();
				cout << "* ******************************* *\n";
				cout << "*         Adjacency List          *\n";
				cout << "* ******************************* *\n";
				countries.populateList();
				countries.printGraph();
				break;
			case 2:
				clear();
				cout << "* ******************************* *\n";
				cout << "*         Adjacency Matrix        *\n";
				cout << "* ******************************* *\n";
				countries.populateMatrix();
				countries.printGraph2();
				break;
			default:
				cout << "Invalid Input \n";
				break;
			}
			break;
		case 2:
			clear();
			int traversalChoice;
			cout << "* ******************************* *\n";
			cout << "*            Traversal            *\n";
			cout << "* ******************************* *\n";
			cout << "Graph Operations \n";
			cout << "[1] BFS \n";
			cout << "[2] DFS \n";
			cout << "Enter choice: ";
			cin >> traversalChoice;
			switch (traversalChoice) {
			case 1:
				clear();
				cout << "* ******************************* *\n";
				cout << "*               BFS               *\n";
				cout << "* ******************************* *\n";
				countries.BFS (0);
				break;
				
			case 2:
				clear();
				cout << "* ******************************* *\n";
				cout << "*               DFS               *\n";
				cout << "* ******************************* *\n";
				countries.DFS (3);
				break;
			default:
				cout << "Invalid Input \n";
				break;
			}
			break;
		case 3:
			cout << "* ******************************* *\n";
			cout << "*          Exit Program           *\n";
			cout << "* ******************************* *\n";
			break;
		
		default:
			cout << "Invalid Input \n";
			break;
		}
		
	}
}


