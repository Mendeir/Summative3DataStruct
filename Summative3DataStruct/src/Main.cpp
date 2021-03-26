#include <iostream>
#include "Data.h"
using namespace std;
void clear ()
{
	cout << "\033[H\033[J";
}
// Author : Bornilla, Dave Y.
int main ()
{
	Graph countries (7);
	int choice;
	while (true)
	{
		cout << "[1] Create Graph \n";
		cout << "[2] Traversal \n";
		cout << "[3] Exit \n\n";
		cout << "Enter choice: ";
		cin >> choice;

		switch (choice)
		{

			case 1:
				clear ();
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
						clear ();
						cout << "* ******************************* *\n";
						cout << "*         Adjacency List          *\n";
						cout << "* ******************************* *\n";
						countries.populateList ();
						countries.printGraph ();
						cin.get ();
						break;
					case 2:
						clear ();
						cout << "* ******************************* *\n";
						cout << "*         Adjacency Matrix        *\n";
						cout << "* ******************************* *\n";
						countries.populateMatrix ();
						countries.printGraph2 ();
						cin.get ();
						break;
					default:
						cout << "Invalid Input \n";
						break;
				}
				cout << "Enter any key to continue..";
				cin.get ();
				clear ();
				break;
			case 2:
				clear ();
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
						clear ();
						int userCountry;
						cout << "* ******************************* *\n";
						cout << "*               BFS               *\n";
						cout << "* ******************************* *\n";
						cout << "Countries \n";
						cout << "[0] Atlanta \n";
						cout << "[1] Austin \n";
						cout << "[2] Chicago \n";
						cout << "[3] Dallas \n";
						cout << "[4] Denver \n";
						cout << "[5] Houston \n";
						cout << "[6] Washington \n";
						cout << "Select a country: ";
						cin >> userCountry;
						countries.BFS (userCountry);
						break;

					case 2:
						clear ();
						int userCountry1;
						cout << "* ******************************* *\n";
						cout << "*               DFS               *\n";
						cout << "* ******************************* *\n";
						cout << "Countries \n";
						cout << "[0] Atlanta \n";
						cout << "[1] Austin \n";
						cout << "[2] Chicago \n";
						cout << "[3] Dallas \n";
						cout << "[4] Denver \n";
						cout << "[5] Houston \n";
						cout << "[6] Washington \n";
						cout << "Select a country: ";
						cin >> userCountry;
						countries.DFS (userCountry);
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