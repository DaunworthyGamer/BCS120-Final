#include <iostream>
#include "Utilities.h"
#include <string>

using namespace std;



void spreadsheet()
{
	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                Enter your name and Ram ID                   *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);

	int RID;

	cout << "enter your ram id: ";
	cin >> RID;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(256, '\n');
		cin >> RID;
	}

	gotoxy(50, 19);
	cout << endl << "enter your first name and last name: ";

	string FName;
	string LName;

	cin >> FName >> LName;

	info(RID, FName, LName);

	gotoxy(50, 21);
	system("PAUSE");

}






void ANRProduct()
{
	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                      Java Programming                       *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");

}


void recordONS()
{
	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                                                             *" << endl;
	gotoxy(50, 12);
	cout << "*                                                             *" << endl;
	gotoxy(50, 13);
	cout << "*                     Android Programming                     *" << endl;
	gotoxy(50, 14);
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");

}


void editONS()
{
	system("Color 2B");
	system("CLS");
	gotoxy(50, 9);
	cout << "***************************************************************" << endl;
	gotoxy(50, 10);
	cout << "*                                                             *" << endl;
	gotoxy(50, 11);
	cout << "*                          edit orders                        *" << endl;
	gotoxy(50, 12);
	cout << "*                              and                            *" << endl;
	gotoxy(50, 13);
	cout << "*                             Sales                           *" << endl;
	gotoxy(50, 14);                        
	cout << "*                                                             *" << endl;
	gotoxy(50, 15);
	cout << "*                                                             *" << endl;
	gotoxy(50, 16);
	cout << "*                                                             *" << endl;
	gotoxy(50, 17);
	cout << "***************************************************************" << endl;
	gotoxy(50, 18);
	system("PAUSE");

}




void mainMenu()
{


	char selection;

	do
	{
		system("Color 1A");
		system("CLS");
		gotoxy(50, 9);
		cout << " Inventory System\n";
		gotoxy(50, 10);
		cout << " ====================================\n";
		gotoxy(50, 11);
		cout << " 1. Enter user information\n";
		gotoxy(50, 12);
		cout << " 2. add/remove a product\n";
		gotoxy(50, 13);
		cout << " 3. Record an order/sale\n";
		gotoxy(50, 14);
		cout << " 4. edit an order/sale\n";
		gotoxy(50, 16);
		cout << " X. Exit\n";
		gotoxy(50, 17);
		cout << " ====================================\n";
		gotoxy(50, 18);
		cout << " Enter your selection: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case '1':
			spreadsheet();
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

