#include "User.h"
#include <fstream>
Manage list_User[100];
string _Username;
/*void ReadFile_User() {
	string temp;
	int tempConvert;
	ifstream filein;
	filein.open("db_user,csv");
	for (int i = 0; i < 100; i++)
	{
		if (filein.eof())
		{
			break;
		}
		getline(filein, temp, ',');
		list_User[i].setUsername(temp);
		getline(filein, temp, ',');
		list_User[i].setPassword(temp);
	}
	filein.close();
}

void WrireFile_User() {
	ofstream filein;
	filein.open("db_user,csv");
	for (int i = 0; i < 100; i++)
	{
		if (filein.eof())
		{
			break;
		}
		filein << list_User[i].getUsername() << ",";
		filein << list_User[i].getPassword() << "," << endl;
	}
	filein.close();
} */