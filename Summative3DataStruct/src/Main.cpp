#include <iostream>
#include "Data.h"
using namespace std;

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

	//Author: Adrianne Magracia
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
				int sourceNumber = 0;

				cout << "* ******************************* *\n";
				cout << "*               BFS               *\n";
				cout << "* ******************************* *\n";

				cout << "[1] Atlanta" << '\n';
				cout << "[2] Austin" << '\n';
				cout << "[3] Chicago" << '\n';
				cout << "[4] Dallas" << '\n';
				cout << "[5] Denver" << '\n';
				cout << "[6] Houston" << '\n';
				cout << "[7] Washington" << '\n';

				cout << "Enter the country number you want to be the source: ";
				cin >> sourceNumber;

				switch (sourceNumber)
				{
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
					case 6:
					case 7:
					default:
						cout << "Invalid input!" << '\n';
				}

				break;
			case 2:
				int sourceNumber = 0;

				cout << "* ******************************* *\n";
				cout << "*               DFS               *\n";
				cout << "* ******************************* *\n";

				cout << "[1] Atlanta" << '\n';
				cout << "[2] Austin" << '\n';
				cout << "[3] Chicago" << '\n';
				cout << "[4] Dallas" << '\n';
				cout << "[5] Denver" << '\n';
				cout << "[6] Houston" << '\n';
				cout << "[7] Washington" << '\n';

				cout << "Enter the country number you want to be the source: ";
				cin >> sourceNumber;

				switch (sourceNumber)
				{
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
					case 6:
					case 7:
					default:
						cout << "Invalid input!" << '\n';
				}

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


