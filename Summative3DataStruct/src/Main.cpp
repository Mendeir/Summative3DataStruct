#include <iostream>
#include "Data.h"
using namespace std;
void clear() 
{ 
	cout << "\033[H\033[J"; 
}
int main()
{
	int choice;

	cout << "[1] Create Graph \n";
	cout << "[2] Traversal \n";
	cout << "[3] Find Path \n";
	cout << "[4] Path Cost \n";
	cout << "[5] Exit \n\n";
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

			break;
		case 2:
			clear();
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
			break;
		case 2:
			clear();
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
		clear();
		cout << "* ******************************* *\n";
		cout << "*           Find Path             *\n";
		cout << "* ******************************* *\n";
		break;

	case 4:
		clear();
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


