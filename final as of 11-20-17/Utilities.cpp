#include <windows.h>  
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

COORD coord = { 0,0 };

void gotoxy(int x, int y) //For Setting the position of Cursor 
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Data storage implementation
void inventoryTypeAdd(string typei)
{

	string DBFile = "InventoryTypes.csv";
	ofstream inv;
	ifstream inv2(DBFile);
	
	if (!inv2.good()) //checks if the file exists if not creates it
	{
		cout << "the file doesnt exist";

		inv.open(DBFile);

		inv << "ID,Inventory Type\n";
		inv << "1," << typei;

		inv.close();

		cout << "the file was created and the type was added";
		system("PAUSE");
	}
	else // if file exists goes to the end of it and appends to it
	{
		string line;

		int id;

		while(getline(inv2, line))
		{		
			string new1 = line;
		}
		
		stringstream ss;
		ss.str(line);
		ss >> id;
		id++;

		inv.open(DBFile, ios::app);
		inv << "\n";
		inv << id <<"," << typei;
		inv.close();

		cout << "the type was added";
		system("PAUSE");
	}
	inv2.close();
}

void inventoryTypeDelete(string typei)
{
	string DBFile = "InventoryTypes.csv";
	ofstream inv;
	ifstream inv2(DBFile);

	if (!inv2.good()) //checks if the file exists if not creates it
	{
		cout << "the file doesnt exist";
		system("PAUSE");
	}
	else // if file exists goes to the end of it and appends to it
	{
		string line;

		string type;
		int id;
		
		vector<string> file;

		while (getline(inv2, line))
		{
			stringstream ss;
			ss.str(line);
			ss >> id >> type;

			if (type !=  ","+typei)
			{
				file.push_back(line);
			}
		}
		
		inv.open(DBFile);
		for (int i = 0; i < file.size(); i++)
		{
			inv << file[i];
		}

		inv.close();

		cout << "the type was deleted";
		system("PAUSE");
	}
	inv2.close();
}