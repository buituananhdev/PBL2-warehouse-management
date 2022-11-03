#pragma once
#include "Product.h"
#include "Laptop.h"
#include "SmartPhone.h"
#include "SmartWatch.h"
#include <vector>
#include <fstream>
extern vector<Laptop*> list;
extern int length;

class Manage {
private:
	string username;
	string password;
public:
	void setUsername(string&);
	void setPassword(string&);
	string getUsername();
	string getPassword();
	void Load_Data_Of_Device(string);
	void WriteFile(string);
	void ShowInfor();
	void setLength(int);
	void Add();
	int Update(string);
	int Delete(string);
	int Search(string);
	void Sort(bool(double, double));
	int Import(string, int);
	int Export(string, int);
};