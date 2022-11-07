#pragma once
#include "Date.h"
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
	string color;
	double priceF;
	double priceE;
	int amount;
	int sales;
	double revenue;
	string status;
	Date inputDate;
	string inputDatetmp;
public:
	Product();
	Product(string, string, string, string, double, double, string, double, int);
	~Product();
	void setID(string&);
	string getID();
	void setName(string&);
	string getName();
	void setBrand(string&);
	string getBrand();
	void setColor(string&);
	string getColor();
	void setPriceF(double&);
	double getPriceF();
	void setStatus(string&);
	string getStatus();
	void setAmount(int&);
	int getAmount();
	int getSales();
	void setSales(int&);
	void setRevenue(double&);
	double getRevenue();
	void UpdateSales(int);
	void UpdateRevenue();
	void UpdateAmount(int);
	void setInputDatetmp(string&);
	string getInputDatetmp();
	void setPriceE(double&);
	double getPriceE();
};