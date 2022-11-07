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