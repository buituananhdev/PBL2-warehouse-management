#include "Manage.h"
#include "Product.h"
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
vector<Product*> list;
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
	return numlines;
}
void Save_Data_Laptop() {
	ofstream fileout;
	fileout.open("db_laptop.csv");
	for (int i = 0; i < 9999; i++)
	{
		if (fileout.eof())
		{
			break;
		}
		if (listLT[i].getID() != "\0")
		{
			/* fileout << listLT[i].getID() << ",";
			fileout << listLT[i].getName() << ",";
			fileout << listLT[i].getBrand() << ",";
			fileout << listLT[i].getColor() << ",";
			fileout << listLT[i].getPriceF() << ",";
			fileout << listLT[i].getAmount() << ",";
			fileout << listLT[i].getSales() << ",";
			fileout << listLT[i].getRevenue() << ",";
			fileout << listLT[i].getStatus() << ",";
			fileout << listLT[i].getInputDatetmp() << ",";
			fileout << listLT[i].getCard() << ",";
			fileout << listLT[i].getWeight() << "\n";*/
			listLT[i].WriteFILE(fileout);
		}
	}
	fileout.close();
}

void Save_Data_SmartWatch() {
	ofstream fileout;
	fileout.open("db_smartwatch.csv");
	for (int i = 0; i < 9999; i++)
	{
		if (fileout.eof())
		{
			break;
		}
		if (listSW[i].getID() != "\0")
		{
			/* fileout << listSW[i].getID() << ",";
			fileout << listSW[i].getName() << ",";
			fileout << listSW[i].getBrand() << ",";
			fileout << listSW[i].getColor() << ",";
			fileout << listSW[i].getPriceF() << ",";
			fileout << listSW[i].getAmount() << ",";
			fileout << listSW[i].getSales() << ",";
			fileout << listSW[i].getRevenue() << ",";
			fileout << listSW[i].getStatus() << ",";
			fileout << listSW[i].getInputDatetmp() << ",";
			fileout << listSW[i].getBatteryTime() << ",";
			fileout << listSW[i].getSize() << "\n";*/
			listSW[i].WriteFILE(fileout);
		}
	}
	fileout.close();
}

void Save_Data_SmartPhone() {
	ofstream fileout;
	fileout.open("db_smartphone.csv");
	for (int i = 0; i < 9999; i++)
	{
		if (fileout.eof())
		{
			break;
		}
		if (listSP[i].getID() != "\0")
		{
			/*fileout << listSP[i].getID() << ",";
			fileout << listSP[i].getName() << ",";
			fileout << listSP[i].getBrand() << ",";
			fileout << listSP[i].getColor() << ",";
			fileout << listSP[i].getPriceF() << ",";
			//fileout << listSP[i].getPriceE() << ",";
			fileout << listSP[i].getAmount() << ",";
			fileout << listSP[i].getSales() << ",";
			fileout << listSP[i].getRevenue() << ",";
			fileout << listSP[i].getStatus() << ",";
			fileout << listSP[i].getInputDatetmp() << ",";
			fileout << listSP[i].getRam() << ",";
			fileout << listSP[i].getRom() << "\n"; */
			listSP[i].WriteFILE(fileout);
		}
	}
	fileout.close();
}

void Load_Data_Of_Laptop() {
	ifstream data_lib;
	data_lib.open("db_laptop.csv");
	for (int i = 0; i < 100; i++)
	{
		if (data_lib.eof())
		{
			break;
		}
		listLT[i].ReadFILE(data_lib);
	}
	data_lib.close();
}
void Load_Data_Of_Smartphone() {
	ifstream data_lib;
	data_lib.open("db_smartphone.csv");
	for (int i = 0; i < 100; i++)
	{
		if (data_lib.eof())
		{
			break;
		}
		listSP[i].ReadFILE(data_lib);
	}
	data_lib.close();
}


void Load_Data_Of_Smartwatch() {
	ifstream data_lib;
	data_lib.open("db_smartwatch.csv");
	for (int i = 0; i < 100; i++)
	{
		if (data_lib.eof())
		{
			break;
		}
		listSW[i].ReadFILE(data_lib);
	}
	data_lib.close();
}