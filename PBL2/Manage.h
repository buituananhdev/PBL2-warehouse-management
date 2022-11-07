#pragma once
#include "Product.h"
#include "Laptop.h"
#include "SmartPhone.h"
#include "SmartWatch.h"
#include <vector>
#include <fstream>
#define MAX 9999
extern Laptop listLT[MAX];
extern SmartPhone listSP[MAX];
extern SmartWatch listSW[MAX];
extern int length;
void Save_Data_SmartPhone();
int NumOfDV(string filename);
class Manage {
private:
	string username;
	string password;
public:
	void setUsername(string&);
	void setPassword(string&);
	string getUsername();
	string getPassword();
	void Load_Data_Of_SP();
	
	void WriteFile(string);
	void ShowInfor();
	void setLength(int);
	void Add_New_Laptop(string, string, string, string, double, double, string, double, int, string, string);
	int Update(string);
	int Delete(string);
	int Search(string);
	void Sort(bool(double, double));
	int Import(string, int);
	int Export(string, int);
};