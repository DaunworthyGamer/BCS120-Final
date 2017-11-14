#include <iostream>
#include <windows.h>                  // For gotoxy() and Sleep function
#include "Utilities.h"
#include <string>

using namespace std;


void splashScreen()
{
	string uname;
	string pword;

	system("CLS");
	
	cout << "------------------------------" << endl;
	cout << "|           Login            |" << endl;
	cout << "------------------------------" << endl;
	cout << "|                            |" << endl;

	cout << "| " << "Username: ";
	cin >> uname;

	cout << "|                            |" << endl;

	cout << "| " << "Password: ";
	cin >> pword;

	cout << "------------------------------" << endl;

	system("pause");


}