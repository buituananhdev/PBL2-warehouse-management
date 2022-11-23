#pragma once
//#include "Date.h"
#include <iostream>
#include <string.h>
#include <ctime>
#include <vector>
using namespace std;
class Product {
public:
	string ID;
	string name;
	string brand;
	double priceF;
	double priceE;
	int amount;
	int sales;
	double revenue;
	string status;
	//Date inputDate;
	string inputDatetmp;
public:
	Product();
	Product(string, string, string, string, double, double, string, double, int);
	~Product();
	virtual void setID(string&);
	virtual string getID();
	virtual void setName(string&);
	virtual string getName();
	virtual void setBrand(string&);
	virtual string getBrand();
	virtual void setPriceF(double&);
	virtual double getPriceF();
	virtual void setPriceE(double&);
	virtual double getPriceE();
	virtual void setStatus(string&);
	virtual string getStatus();
	virtual void setAmount(int&);
	virtual int getAmount();
	virtual int getSales();
	virtual void setSales(int&);
	virtual void setRevenue(double&);
	virtual double getRevenue();
	virtual void UpdateSales(int);
	virtual void UpdateRevenue();
	virtual void UpdateAmount(int);
	virtual void setInputDatetmp(string&);
	virtual string getInputDatetmp();
	virtual void ReadFILE(ifstream&);
	virtual void WriteFILE(ostream&);
};