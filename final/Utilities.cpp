#include <windows.h>  
#include <iostream>
#include <string>
#include <fstream>
#include <sstream> // stringstream, stringbuf
#include <iomanip>
#include <limits>

using namespace std;

COORD coord = { 0,0 };

void gotoxy(int x, int y) //For Setting the position of Cursor
{

	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void write()
{

}

void info(int Rid, string FName, string LName)
{

	cout << "Hello " << FName << " " << LName << " welcome to the system" << endl;

	cout << "your Ram ID is " << Rid << endl;

}




// Data storage implementation

using namespace std;


bool writeDataToFile(int id, string firstName, string lastName) //writes data to the file
{

	bool result = false;
	fstream fs;
	//Creating and openning file to write using fstream::out
	fs.open("studentsData.txt", fstream::app);

	if (fs.is_open())
	{

		fs << id << " " << firstName << " " << lastName << endl;
		fs.close();
		result = true;

	}

	else
	{

		cout << "Unable to open file" << endl;
		result = false;

	}

	return result;

}

istream& ignoreline(ifstream& in, ifstream::pos_type& pos) //ignores the line
{

	//tellg Returns the position of the current character in the input stream.
	pos = in.tellg();
	return in.ignore(numeric_limits<streamsize>::max(), '\n');

}

string getLastLine(ifstream& fileName) // gets the last line in the file
{

	ifstream::pos_type pos = fileName.tellg();

	ifstream::pos_type lastPos;
	while (fileName >> ws && ignoreline(fileName, lastPos))
		pos = lastPos;

	fileName.clear();
	fileName.seekg(pos);

	string line;
	getline(fileName, line);

	return line;

}


inline bool fileExists(const string& fileName) //checks if the file exists (Duh)
{

	ifstream f(fileName);
	return f.good();

}


void getID(string fileName, int & id) // gets the most recently used id from the file then adds 1 to it to get the next id to use 
{

	if (fileExists(fileName))
	{

		ifstream file(fileName);
		string first, last;
		stringstream ss;

		if (file)
		{

			string line = getLastLine(file);
			ss.str(line);
			ss >> id >> first >> last;
			id++;

		}

		else
		{
			cout << "Unable to open file.\n";
		}

	}

	else
	{
		id = 1;
	}

}

string center(const string s, const int w) //centers the inputs
{

	stringstream ss, spaces;
	int padding = w - s.size();                 // count excess room to pad

	for (int i = 0; i < padding / 2; ++i)
		spaces << " ";

	ss << spaces.str() << s << spaces.str();    // format with padding

	if (padding > 0 && padding % 2 != 0)               // if odd #, add 1 space
		ss << " ";

	return ss.str();

}

void displayData(string fileName) //displays the entries in the file in a spreadsheet like manner
{

	fstream inFile;

	string id, first, last;
	stringstream ss;

	inFile.open(fileName);
	string line;

	if (inFile.is_open())
	{

		cout << string(36, '=') << endl;  //repeat a char
		cout << " | " << center("id", 4) << " | "
			<< center("first", 10) << " | "
			<< center("last", 10) << " | " << "\n";

		cout << string(36, '-') << endl;  //repeat a char

		while (getline(inFile, line))
		{

			ss.str(line);
			ss >> id >> first >> last;

			cout << " | " << center(id, 4) << " | "
				<< center(first, 10) << " | "
				<< center(last, 10) << " | " << "\n";

			ss.clear();

		}

		inFile.close();
		cout << string(36, '=') << endl;  //repeat a char

	}

	else
		cout << "Unable to open file" << endl;
	

}


string toUpperCase(string input) //makes all the letters in a string uppercase
{
	
	string result = "";

	for (int i = 0; i < input.length(); ++i)
		result += toupper(input[i]);

	return result;

}

void search(string firstName, string lastName, string fileName) // searches the file for a specific value/entry
{

	fstream inFile;
	string id, first, last;
	stringstream ss;
	int counter = 0;


	inFile.open(fileName);
	string line;

	if (inFile.is_open())
	{

		cout << string(36, '=') << endl;  //repeat a char
		cout << " | " << center("id", 4) << " | "
			<< center("first", 10) << " | "
			<< center("last", 10) << " | " << "\n";

		cout << string(36, '-') << endl;  //repeat a char

	  //cout << id << " " << firstName << " " << lastName << endl;

		while (getline(inFile, line))
		{

			ss.str(line);
			ss >> id >> first >> last;

			//cout << id << " " << first << " " << last << endl;
			if ((toUpperCase(first) == toUpperCase(firstName)) && (toUpperCase(last) == toUpperCase(lastName)))
			{

				cout << " | " << center(id, 4) << " | "
					<< center(first, 10) << " | "
					<< center(last, 10) << " | " << "\n";
				counter++;

			}

			ss.clear();

		}

		inFile.close();

		if (counter == 0)
			cout << " | " << center("No data found", 30) << " | " << "\n";

		cout << string(36, '=') << endl;  //repeat a char

	}

	else
		cout << "Unable to open file" << endl;

}
