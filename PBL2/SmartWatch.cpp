#include "SmartWatch.h"
#include "Product.h"
#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
using namespace std;

SmartWatch::SmartWatch() {

}

SmartWatch::SmartWatch(string ID, string name, string brand, string color, double priceF, double priceE, string status, double discount, int amount, string size) {

}
SmartWatch::~SmartWatch() {

}
void SmartWatch::setSize(string& nSize) {
	this->size = nSize;
}
string SmartWatch::getSize() {
	return this->size;
}
void SmartWatch::setBatteryTime(string& nBT) {
	this->batteryTime = nBT;
}
string SmartWatch::getBatteryTime() {
	return this->batteryTime;
}
void SmartWatch::ReadFILE(ifstream& filein) {
	Product::ReadFILE(filein);
	getline(filein, batteryTime, ',');
	getline(filein, size,'\n');
}
void SmartWatch::WriteFILE(ostream& fileout) {
	Product::WriteFILE(fileout);
	fileout << batteryTime << "," << size << endl;
}