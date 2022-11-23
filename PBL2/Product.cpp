#include "Product.h"
//#include "Date.h"
#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
#include <vector>
#include <numeric>
using namespace std;
Product::Product() {
	this->ID = "\0";
	this->name = "\0";
	this->brand = "\0";
	this->priceF = 0;
	this->amount = 0;
	this->sales = 0;
	this->revenue = 0;
	this->status = "\0";
}
Product::Product(string ID, string name, string brand, string color, double priceF, double priceE, string status, double discount, int amount) {
	this->ID = ID;
	this->name = name;
	this->brand = brand;
	this->priceF = priceF;
	this->status = status;
	this->amount = amount;
}
Product::~Product() {

}

void Product::setID(string& nId) {
	this->ID = nId;
}
string Product::getID() {
	return ID;
}
void Product::setName(string& nName) {
	this->name = nName;
}
string Product::getName() {
	return name;
}
void Product::setBrand(string& nBrand) {
	this->brand = nBrand;
}
string	Product::getBrand() {
	return brand;
}
void Product::setPriceF(double& nPriceF) {
	this->priceF = nPriceF;
}
double Product::getPriceF() {
	return priceF;
}
void Product::setStatus(string& nStatus) {
	this->status = nStatus;
}
string Product::getStatus() {
	return this->status;
}

void Product::setAmount(int& nAmount) {
	this->amount = nAmount;
}
void Product::UpdateAmount(int bonusAmount) {
	this->amount += bonusAmount;
}
int Product::getAmount() {
	return this->amount;
}

int Product::getSales() {
	return this->sales;
}
double Product::getRevenue() {
	return this->revenue;
}
void Product::UpdateSales(int nSales) {
	this->sales += nSales;
}
void Product::UpdateRevenue() {
	this->revenue = this->sales * this->priceF;
}
void Product::setSales(int& nSales) {
	this->sales = nSales;
}
void Product::setRevenue(double& nRevenue) {
	this->revenue = nRevenue;
}
void Product::setInputDatetmp(string& n) {
	this->inputDatetmp = n;
}
string Product::getInputDatetmp() {
	return this->inputDatetmp;
}
void Product::setPriceE(double& nPriceE) {
	this->priceE = nPriceE;
}
double Product::getPriceE() {
	return this->priceE;
}

void Product::ReadFILE(ifstream& filein) {
	getline(filein, ID, ',');
	getline(filein, name, ',');
	getline(filein, brand, ',');
	filein >> priceF;
	filein.seekg(1, 1);
	filein >> priceE;
	filein.seekg(1, 1);
	filein >> amount;
	filein.seekg(1, 1);
	filein >> sales;
	filein.seekg(1, 1);
	filein >> revenue;
	filein.seekg(1, 1);
	getline(filein, status, ',');
	getline(filein, inputDatetmp, ',');
}
void Product::WriteFILE(ostream& fileout) {
	fileout << ID << ',' << name << ',' << brand << ',' << priceF << ',' << priceE << ',' << amount << ',' << sales << ',' << revenue << ',' << status << ',' << inputDatetmp << ',';
}