#pragma once
#include "Manage.h"
#include "Product.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 999
string Staff_Name;
List<User> list_User(MAX);
List<Laptop> listLT(MAX);
List<SmartPhone> listSP(MAX);
List<SmartWatch> listSW(MAX);
List<Invoice> list_Invoice(MAX);

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

void Save_Data_Invoice() {
	ofstream fileout;
	fileout.open("db_invoice.csv");
	for (int i = 0; i < list_Invoice.GetLength(); i++)
	{
		if (fileout.eof())
		{
			break;
		}
		if (list_Invoice[i].getID() != "\0")
		{
			list_Invoice[i].WriteFILE(fileout);
		}
	}
	fileout.close();
}
void Save_Data_Laptop() {
	ofstream fileout;
	fileout.open("db_laptop.csv");
	for (int i = 0; i < listLT.GetLength(); i++)
	{
		if (fileout.eof())
		{
			break;
		}
		if (listLT[i].getID() != "\0") {
			listLT[i].WriteFILE(fileout);
		}
	}
	fileout.close();
}

void Save_Data_SmartWatch() {
	ofstream fileout;
	fileout.open("db_smartwatch.csv");
	for (int i = 0; i < listSW.GetLength(); i++)
	{
		if (fileout.eof())
		{
			break;
		}
		if (listSW[i].getID() != "\0")
		{
			listSW[i].WriteFILE(fileout);
		}
	}
	fileout.close();
}

void Save_Data_SmartPhone() {
	ofstream fileout;
	fileout.open("db_smartphone.csv");
	for (int i = 0; i < listSP.GetLength(); i++)
	{
		if (fileout.eof())
		{
			break;
		}
		if (listSP[i].getID() != "\0") {
			listSP[i].WriteFILE(fileout);
		}
	}
	fileout.close();
}

void Load_Data_Of_Laptop() {
	ifstream data_lib;
	data_lib.open("db_laptop.csv");
	for (int i = 0; i < listLT.GetLength(); i++)
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
	for (int i = 0; i < listSP.GetLength(); i++)
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
	for (int i = 0; i < listSW.GetLength(); i++)
	{
		if (data_lib.eof())
		{
			break;
		}
		listSW[i].ReadFILE(data_lib);
	}
	data_lib.close();
}
template <class T, class U>
void Load_Data(T arr, U filename)
{
	ifstream data_lib;
	data_lib.open(filename);
	for (int i = 0; i < arr.GetLength(); i++)
	{
		if (data_lib.eof())
		{
			break;
		}
		arr[i].ReadFILE(data_lib);
	}
	data_lib.close();
}