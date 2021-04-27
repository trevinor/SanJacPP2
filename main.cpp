#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	int choice;
	
	cout << "1 - Client Information\n";
	cout << "2 - Sales Representatives\n";
	cout << "3 - Products\n";
	// cout << "4 - Sales\n";
	cout << "4 - Exit" << endl << endl;
	
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			cout << "Client Information: \n";
			// rest of code here
		case 2:
			cout << "Sales Representatives: \n";
		case 3:
			
	}
	
	
	return 0;
}
//struct Menu;
    //char printMenu(string inputText) {
    //char ch;
    //void showdata();
    //display menu

    //cout << "\n\nMenu: \n" << "C - Open Client List" << "\nR - Open Sales Representative List" << "\nP - Open Product List" << "\nQ - Quit" << endl;
    //cout << "\n\nChoose and option: ";

    //cin >> ch;

    //switch(ch) {
    //case 'c':
    //case 'C':
        //cout << "Client list will open here" << endl;
        //break;
    //case 'r':
    //case 'R':
        //cout << showdata.Print() << endl;
        //break;
    //case 'p':
    //case 'P':
        //cout << "Product list will open here" << endl;
        //break;
    //case 's':
    //case 'S':
        //cout << "Sales list will open here" << endl;
        //break;
    //case 'q':
    //case 'Q':
        //exit (EXIT_SUCCESS);

        //}
        //return ch;
//}


//int main() {
    //string inputText, searchWord;
    //char option;

    //cout << "Welcome to El Habanero Database" << endl;

    //do {
        //option = printMenu(inputText);
            //cout << endl;
   // }
   // while (option!= 'Q'||'q');
   // return 0;
}
