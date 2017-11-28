#include <iostream>
#include "Utilities.h"
#include <string>

using namespace std;



void inv_type()
{
	char selection;
	string type;

	do
	{
		system("Color 02");
		system("CLS");
		cout << " Inventory System\n";
		cout << " ====================================\n";
		cout << " 1. add a product type\n";
		cout << " 2. remove a product type\n";
		cout << " 3. Record an order/sale\n";
		cout << " 4. edit an order/sale\n";
		cout << " X. return to previous menu\n";
		cout << " ====================================\n";
		cout << " Enter your selection: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':

			
			cout << "what kind of product type do you want to add to the list?";
			cin >> type;
			inventoryTypeAdd(type);
			break;

		case '2':
			cout << "what kind of product type do you want to remove from the list?";
			cin >> type;
			inventoryTypeDelete(type);
			break;

		case '3':
			
			break;

		case '4':
			
			break;

		case 'x':
			cout << "Goodbye.\n";
			return;
		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 5);

}

void ANRProduct()
{
	system("Color 02");
	system("CLS");
	cout << "***************************************************************" << endl;
	cout << "*                                                             *" << endl;
	cout << "*                                                             *" << endl;
	cout << "*                                                             *" << endl;
	cout << "*                      Java Programming                     *" << endl;
	cout << "*                                                             *" << endl;
	cout << "*                                                             *" << endl;
	cout << "*                                                             *" << endl;
	cout << "***************************************************************" << endl;
	system("PAUSE");

}

void recordONS()
{
	system("Color 02");
	system("CLS");
	cout << "***************************************************************" << endl;
	cout << "*                                                             *" << endl;
	cout << "*                                                             *" << endl;
	cout << "*                                                             *" << endl;
	cout << "*                     Android Programming                     *" << endl;
	cout << "*                                                             *" << endl;
	cout << "*                                                             *" << endl;
	cout << "*                                                             *" << endl;
	cout << "***************************************************************" << endl;
	system("PAUSE");

}

void editONS()
{
	system("Color 02");
	system("CLS");
	cout << "***************************************************************" << endl;
	cout << "*                                                             *" << endl;
	cout << "*                          edit orders                        *" << endl;
	cout << "*                              and                            *" << endl;
	cout << "*                             Sales                           *" << endl;                    
	cout << "*                                                             *" << endl;
	cout << "*                                                             *" << endl;
	cout << "*                                                             *" << endl;
	cout << "***************************************************************" << endl;
	system("PAUSE");

}

void mainMenu()
{
	char selection;

	do
	{
		system("Color 02");
		system("CLS");
		cout << " Inventory System\n";
		cout << " ====================================\n";
		cout << " 1. inventory editing menu\n";
		cout << " 2. add/remove a product\n";
		cout << " 3. Record an order/sale\n";
		cout << " 4. users\n";
		cout << " X. Exit\n";
		cout << " ====================================\n";
		cout << " Enter your selection: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			inv_type();
			break;

		case '2':
			ANRProduct();
			break;
		case '3':
			recordONS();
			break;

		case '4':
			editONS();
			break;

		case 'x':
			cout << "Goodbye.\n";
			return;
		default: cout << selection << " is not a valid menu item.\n";

			cout << endl;
		}

	} while (selection != 5);


}

