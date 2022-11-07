#include "Manage.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 9999
Laptop listLT[MAX];
SmartPhone listSP[MAX];
SmartWatch listSW[MAX];
int length;

void Manage::setUsername(string& nUser) {
    this->username = nUser;
}
void Manage::setPassword(string& nPass) {
    this->password = nPass;
}
string Manage::getPassword() {
    return this->password;
}
string Manage::getUsername() {
    return this->username;
}
void Manage::setLength(int nlength) {
    length = nlength;
}
int NumOfDV(string filename) {
	ifstream filein;
	char c;
	int numchars, numlines;
	filein.open(filename);
	numchars = 0;
	numlines = 0;
	filein.get(c);
	while (filein) {
		while (filein && c != '\n') {
			numchars = numchars + 1;
			filein.get(c);
		}
		numlines = numlines + 1;
		filein.get(c);
	}
	filein.close();
	return numlines - 1;
}
void Save_Data_SmartPhone() {
	ofstream fileout;
	fileout.open("db_smartphone.csv");
	for (int i = 0; i < 100; i++)
	{
		if (fileout.eof())
		{
			break;
		}
		if (listSP[i].getID() != "\0")
		{
			fileout << listSP->getID() << ",";
			fileout << listSP->getName() << ",";
			fileout << listSP->getBrand() << ",";
			fileout << listSP->getColor() << ",";
			fileout << listSP->getPriceF() << ",";
			fileout << listSP->getPriceE() << ",";
			fileout << listSP->getAmount() << ",";
			fileout << listSP->getSales() << ",";
			fileout << listSP->getRevenue() << ",";
			fileout << listSP->getStatus() << ",";
			fileout << listSP->getInputDatetmp() << ",";
			fileout << listSP->getRam() << ",";
			fileout << listSP->getRom() << "\n";
		}
	}
	fileout.close();
}
