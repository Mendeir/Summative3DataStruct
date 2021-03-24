#include <iostream>
#include "Data.h"
using namespace std;

int main()
{
	int choice;

	cout << "Create Graph [1] \n";
	cout << "Traversal [2] \n";
	cout << "Find Path [3] \n";
	cout << "Path Cost [4] \n";
	cout << "Exit [5] \n";
	cout << "Enter choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:

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
			cout << "* ******************************* *\n";
			cout << "*         Adjacency List          *\n";
			cout << "* ******************************* *\n";

			break;
		case 2:

			cout << "* ******************************* *\n";
			cout << "*         Adjacency Matrix        *\n";
			cout << "* ******************************* *\n";
			break;
		default:
			cout << "Invalid Input \n";
			break;
		}
		break;
	case 2:

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
			cout << "* ******************************* *\n";
			cout << "*               BFS               *\n";
			cout << "* ******************************* *\n";
			break;
		case 2:
			cout << "* ******************************* *\n";
			cout << "*               DFS               *\n";
			cout << "* ******************************* *\n";
			break;
		default:
			cout << "Invalid Input \n";
			break;
		}
		break;
	case 3:
		cout << "* ******************************* *\n";
		cout << "*           Find Path             *\n";
		cout << "* ******************************* *\n";
		break;

	case 4:
		cout << "* ******************************* *\n";
		cout << "*            Path Cost            *\n";
		cout << "* ******************************* *\n";
		break;

	case 5:
		cout << "* ******************************* *\n";
		cout << "*          Exit Program           *\n";
		cout << "* ******************************* *\n";
		break;

	default:
		cout << "Invalid Input \n";
		break;
	}


}


