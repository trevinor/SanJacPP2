// PP2
// Team Uno
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include "Clients.h"

using namespace std;



int main()
{
	int choice;

	// MAIN MENU
	cout << "---- Welcome to El Habanero's Database System ----" << endl << endl;
	cout << "MAIN MENU" << endl << endl;
	cout << "1: Clients" << endl;
	cout << "2: Sales Representatives" << endl;
	cout << "3: Products" << endl;
	//cout << "4: Sales" << endl << endl; <------ will be used for PP3
	cout << "Please enter a module: ";
	cin >> choice;

	switch (choice)
	{
		case 1:
		{
			// CLIENTS MENU
			cout << endl << "MAIN MENU > Clients menu" << endl << endl;
			cout << "1: Display clientsinformation.txt content" << endl;
			cout << "2: Search" << endl;
			cout << "3: Add" << endl;
			cout << "4: Update" << endl;
			cout << "5: Save" << endl;
			cout << "0: Back" << endl;

			while (choice)
			{
				cout << endl << "Please enter a module: ";
				cin >> choice;


				switch (choice)
				{
                case 1:
					{
						Clients object;
						break;
					}
                case 2:
					{
						// search client by name from clientinformation.txt function
						break;
					}
                case 3:
					{
						// add new client to clientinformation.txt function
						break;
					}
                case 4:
                    {
						// update client in clientinformation.txt function
						break;
                    }
                case 5:
                    {
                            // save client information function
                    }
                case 0:
					{
						// back to main menu function
						break;
					}
				}
			}

			break;
		}
		case 2:
		{
			// SALES REPS MENU
			cout << endl << "MAIN MENU > Sales Representatives menu" << endl << endl;
			cout << "1: Display salesrep.txt content" << endl;
			cout << "2: Search" << endl;
			cout << "3: Add" << endl;
			cout << "4: Update" << endl;
			cout << "5: Save" << endl;
			cout << "0: Back" << endl;

			while (choice)
			{
				cout << endl << "Please enter a module: ";
				cin >> choice;

				switch (choice)
				{
                case 1:
                    {
						// list all data from salesrep.txt function
						break;
                    }
                case 2:
                    {
						// search sales rep by name from salesrep.txt function
						break;
                    }
                case 3:
                    {
						// add new sales rep to salesrep.txt function
						break;
                    }
                case 4:
                    {
						// update sales rep in salesrep.txt function
						break;
                    }
                case 5:
                    {
						// save all information function
						break;
                    }
                case 0:
                    {
						// back to main menu function
						break;
					}
				}
			}



			break;
		}
		case 3:
		{
			// PRODUCTS MENU
			cout << endl << "MAIN MENU > Products menu" << endl << endl;
			cout << "1: Read File" << endl;
			cout << "2: List All" << endl;
			cout << "3: Add" << endl;
			cout << "4: Update" << endl;
			cout << "5: Save" << endl;
			cout << "0: Back" << endl;

			while (choice)
			{
				cout << endl << "Please enter a moduile: ";
				cin >> choice;

				switch (choice)
				{

                case 1:
					{
						// read products.txt file function
						break;
					}
                case 2:
					{
						// list all data from products.txt function
						break;
					}
                case 3:
					{
						// add new product to products.txt function
						break;
					}
                case 4:
					{
						// update products in product.txt function
						break;
					}
                case 5:
					{
						// save all information function
						break;
					}
                case 0:
					{
						// back to main menu function
						break;
					}
				}
			}

			break;
		}
	}




	return 0;
}
