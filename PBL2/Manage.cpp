#pragma once
#include "Manage.h"
#include "Product.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 9999
string Staff_Name;
User list_User[100];
Laptop listLT[MAX];
SmartPhone listSP[MAX];
SmartWatch listSW[MAX];
int length = 0;
void ToUpper(string& str) {
	for (int i = 0; i <= str.size(); i++) {
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
}
int Search_Name_SP(string index) {

	return 0;
}
void Remove_ID_SP(int index) {
	for (int i = index; i < NumOfDV("db_smartphone.csv"); i++) {
		listSP[i] = listSP[i + 1];
	}
}
void Remove_ID_LT(int index) {
	for (int i = index; i < NumOfDV("db_laptop.csv"); i++) {
		listLT[i] = listLT[i + 1];
	}
}
void Remove_ID_SW(int index) {
	for (int i = index; i < NumOfDV("db_smartwatch.csv"); i++) {
		listSW[i] = listSW[i + 1];
	}
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
		if (listLT[i].getID() != "\0") {
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
		if (listSP[i].getID() != "\0") {
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